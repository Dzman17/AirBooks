using System;
using System.Collections;
using System.Collections.Generic;
using System.Data;
using System.IO;
using System.Linq;
using System.Net.Sockets;
using System.Numerics;
using System.Runtime.InteropServices;
using System.Runtime.Remoting.Messaging;
using System.Runtime.Remoting.Metadata.W3cXsd2001;
using System.Security.Principal;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using MySql.Data.MySqlClient;

namespace AirBooksDBHandler
{

    public struct Account {
        public Account(string email, string password, string firstName, string lastName, char accountType = 'c') {
            this.email = email;
            this.password = password;
            this.firstName = firstName;
            this.lastName = lastName;
            /* Specifies the account type that all new accounts will be assigned.
             * Must be changed during instalation to allow for the creation of other account types.
             * 'c' = customer, 'e' = employee, 'm' = manager
             */
            this.accountType = accountType;
        }

        public string email;
        public string password;
        public string firstName;
        public string lastName;
        public char accountType;
    }

    public struct Flight {
        public Flight(int flightID, DateTime time, string destination, int rows, int columns, 
                    double price, double luggageMax, double currentLuggage) { 
            this.flightID = flightID;
            this.time = time;
            this.destination = destination;
            this.rows = rows;
            this.columns = columns;
            this.price = price;
            this.luggageMax = luggageMax;
            this.currentLuggage = currentLuggage;
        }

        public int flightID;
        public DateTime time;
        public string destination;
        public int rows;
        public int columns;
        public double price;
        public double luggageMax;
        public double currentLuggage;
    }

    public struct Ticket {
        public Ticket(int seatID, int flightID, string ownerEmail) {
            this.seatID = seatID;
            this.flightID = flightID;
            this.ownerEmail = ownerEmail;
        }

        public int seatID;
        public int flightID;
        public string ownerEmail;
    }


    public class DBHandler
    {
        //these values will be used by multiple various operations, and should be, for the most part, constant
        const string server = "127.0.0.1", uid = "AirBooksDBHandler", pwd = "a1r-0-dYnam!cs", db = "air-books";
        const string conString = "server=" + server + ";uid=" + uid + ";pwd=" + pwd + ";database=" + db;
        const string numQuery = "select count(*) ", getQuery = "select * ",
            insertQuery = "insert into ", deleteQuery = "delete from ";
        MySqlConnection con = new MySqlConnection(conString);
        Flight[] flights = null;
        Ticket[] tickets = null;


        //constructor for the database handler, opens a connection to the database
        public DBHandler() {
            try { con.Open(); }
            catch (Exception ex) { throw new Exception(ex.Message); }
        }

        //destructor for the database handler, closes its connection to the database
        ~DBHandler() {
            try { con.Close(); }
            catch (Exception ex) { throw new Exception(ex.Message); }
        }

        /* Returns a boolean result based on if the account already exists in the database
         * false = email already has an account
         * true = account does not exist and can be created
         */

        public bool createAccount(Account account) {
            try {
                string query = "`" + db + "`.`account` values('" + account.email + "', '" + account.password + "', '" +
                       account.firstName + "', '" + account.lastName + "', '" + account.accountType + "')";
                MySqlCommand command = new MySqlCommand(insertQuery + query, con);
                using (MySqlDataReader reader = command.ExecuteReader()) { reader.Read();  return true; }
            }
            catch (Exception ex) { return false; }
        }

        /* Returns a boolean result based on if the account already exists in the database
         * false = there is no account with the specified email and password
         * true = the account existed and is now deleted
         */
        public bool deleteAccount(Account account) {
            try {
                string query = "`" + db + "`.`account` where `email`='" + account.email + "' and `password`='" + account.password + "'";
                MySqlCommand command = new MySqlCommand(deleteQuery + query, con);
                using (MySqlDataReader reader = command.ExecuteReader()) { reader.Read();  return true; }
            }
            catch (Exception ex) { return false; }
        }

        /* Returns an Account from the DataBase
         */
        public Account getAccountInfo(string email, string password) {
            
            try {
                Account user;
                string query = "from `" + db + "`.`account` where `email`='" + email + "' and `password`='" + password + "'";
                MySqlCommand command = new MySqlCommand(getQuery + query, con);
                using (MySqlDataReader reader = command.ExecuteReader()) {
                    reader.Read();
                    string firstName = reader.GetString(2);
                    string lastName = reader.GetString(3);
                    char accountType = reader.GetChar(4);

                    user = new Account(email, password, firstName, lastName);
                    user.accountType = accountType;
                    return user;
                }
            }
            catch (Exception ex) { return new Account("none", "", "", ""); }
        }

        public bool checkEmail(string email) {
            try {
                string query = "from `" + db + "`.`account` where `email`='" + email + "'";
                MySqlCommand command = new MySqlCommand(numQuery + query, con);
                using (MySqlDataReader reader = command.ExecuteReader()) {
                    reader.Read();
                    if (reader.GetInt32(0) > 0)
                        return true;
                    else
                        return false;
                }
            }
            catch (Exception ex) { return false; }
        }

        private String formatTime(DateTime time) {
            return time.ToString("yyyy-MM-dd HH:mm:ss");
        }

        /* Returns a flight from a list
         * Should be used in a for loop so that all flights in the list are returned,
         * using position as an itorator starting at 0
         */
        public Flight getFlight(string destination, DateTime start, DateTime end, int position) {
            if (flights == null) {
                string earliest = formatTime(start);
                string latest = formatTime(end);
                string query = ("from `" + db + "`.`flights` where `destination`='" + destination + "' and '" + earliest +
                        "'<=`time` and `time`<='" + latest + "'");
                searchFlights(query);
            }

            if (position < flights.Length)
                return flights[position];
            else {
                flights = null;
                return new Flight(-1, new DateTime(), "none", 0, 0, 0, 0, 0);
            }
        }

        /* Returns one flight based on the searched flightID
         * Used for tickets
         */
        public Flight getFlight(int flightID) {
            string query = ("from `" + db + "`.`flights` where `flightID`=" + flightID);
            using (MySqlCommand command = new MySqlCommand(getQuery + query, con)) {
                using (MySqlDataReader reader = command.ExecuteReader()) {
                    reader.Read();
                    Flight flight = new Flight(reader.GetInt32(0), reader.GetDateTime(1), reader.GetString(2),
                                        reader.GetInt32(3), reader.GetInt32(4), reader.GetDouble(5),
                                        reader.GetDouble(6), reader.GetDouble(7));
                    return flight;
                }
            }
        }

        public Flight getAnyFlight(int position) {
            if (flights == null) {
                string query = "from `" + db + "`.`flights`";
                searchFlights(query);
            }

            if (position < flights.Length)
                return flights[position];
            else {
                flights = null;
                return new Flight(-1, new DateTime(), "none", 0, 0, 0, 0, 0);
            }
        }

        /* Searches the DB for a specific flight
         * Used internally to reduce redundancy
         */
        private void searchFlights(string query) {
            //try {
                using (MySqlCommand command = new MySqlCommand(numQuery + query, con)) {
                    using (MySqlDataReader reader = command.ExecuteReader()) {
                        reader.Read();
                        flights = new Flight[reader.GetInt32(0)];
                    }
                }
                using (MySqlCommand command = new MySqlCommand(getQuery + query, con)) {
                    using (MySqlDataReader reader = command.ExecuteReader()) {
                        int i = 0;
                        while (reader.Read() && i < flights.Length) {
                            flights[i] = new Flight(reader.GetInt32(0), reader.GetDateTime(1), reader.GetString(2),
                                         reader.GetInt32(3), reader.GetInt32(4), reader.GetDouble(5),
                                         reader.GetDouble(6), reader.GetDouble(7));
                            i++;
                        }
                    }
                }
            //}
            //catch (Exception ex) { Console.WriteLine("Error in searchFlights"); }
        }

        public int findNewFlightID() {
            try {
                string query = "from `" + db + "`.`flights` where `flightID`=";
                int flightID = 0;
                bool empty = false;
                MySqlCommand command;
                MySqlDataReader reader;

                do {
                    using (command = new MySqlCommand(numQuery + query + flightID, con)) {
                        using (reader = command.ExecuteReader()) {
                            reader.Read();
                            if (reader.GetInt32(0) == 0)
                                empty = true;
                            else
                                flightID++;
                        }
                    }
                } while (!empty);

                return flightID;
            }
            catch (Exception ex) { return -1; }
        }

        /* Adds a flight to the database
         */
        public bool addFlight(Flight flight) {
            try {
                string query = "`" + db + "`.`flights` values(" + flight.flightID + ", '" + formatTime(flight.time) + 
                    "', '" + flight.destination + "', " + flight.rows + ", " + flight.columns + ", " + flight.price + 
                    ", " + flight.luggageMax + ", " + flight.currentLuggage + ")";
                using (MySqlCommand command = new MySqlCommand(insertQuery + query, con))
                    using (MySqlDataReader reader = command.ExecuteReader())
                        reader.Read();
                return true;
            }
            catch (Exception ex) { return false; }
        }

        /* Cancels/delets a flight from the database
         */
        public bool cancelFlight(int flightID) {
            try {
                string query = "`" + db + "`.`flights` where `flightID`=" + flightID;
                using (MySqlCommand command = new MySqlCommand(deleteQuery + query, con))
                    using (MySqlDataReader reader = command.ExecuteReader())
                        reader.Read();
                cancelAllTickets(flightID);
                return true;
            }
            catch (Exception ex) { return false; }
        }

        /* Returns how many seats have filled on a given flight
         */
        public int getAvailability(int flightID) {
            try {
                string query = "from `" + db + "`.`tickets` where `flightID`=" + flightID;
                int filledOccupancy;
                using (MySqlCommand command = new MySqlCommand(numQuery + query, con)) {
                    using (MySqlDataReader reader = command.ExecuteReader()) {
                        reader.Read();
                        filledOccupancy = reader.GetInt32(0);
                    }
                }
                Flight flight = getFlight(flightID);
                return (flight.rows * flight.columns) - filledOccupancy;
            }
            catch (Exception ex) { return -1; }
        }

        /* Returns a ticket from a list
         * Should be used in a for loop so that all flights in the list are returned,
         * using position as an iterator starting at 0
         * Searches using email as a key
         */
        public Ticket getTicket(string ownerEmail, int position) {
            if (tickets == null) {
                string query = "from `" + db + "`.`tickets` where `ownerEmail`='" + ownerEmail + "'";
                searchTickets(query);
            }

            if (position < tickets.Length)
                return tickets[position];
            else {
                tickets = null;
                return new Ticket(-1, -1, "");
            }
        }

        /* Returns a ticket from a list
         * Should be used in a for loop so that all flights in the list are returned,
         * using position as an iterator starting at 0
         * Searches using flightID as a key
         */
        public Ticket getTicket(int flightID, int position) {
            if(tickets == null) {
                string query = "from `" + db + "`.`tickets` where `flightID`=" + flightID;
                searchTickets(query);
            }

            if (position < tickets.Length)
                return tickets[position];
            else {
                tickets = null;
                return new Ticket(-1, -1, "");
            }
        }

        /* Returns a flight from a list
         * Should be used in a for loop so that all flights in the list are returned,
         * using position as an iterator starting at 0
         * Used internally for searching through the database
         */
        
        private void searchTickets(string query) {
            try {
                using (MySqlCommand command = new MySqlCommand(numQuery + query, con)){
                    using (MySqlDataReader reader = command.ExecuteReader()){
                        reader.Read();
                        tickets = new Ticket[reader.GetInt32(0)];
                    }
                }
                using (MySqlCommand command = new MySqlCommand(getQuery + query, con)) {
                    using (MySqlDataReader reader = command.ExecuteReader()) {
                        int i = 0;
                        while (reader.Read() && i < tickets.Length) {
                            tickets[i] = new Ticket(reader.GetInt32(0), reader.GetInt32(1), reader.GetString(2));
                            i++;
                        }
                    }
                }
            }
            catch (Exception ex) { Console.WriteLine("Error in searchTickets"); }
        }

        /* Adds a ticket to the database
         */
        public bool addTicket(Ticket ticket) {
            try {
                string query = "`" + db + "`.`tickets` values(" + ticket.seatID + ", " + ticket.flightID +
                        ", '" + ticket.ownerEmail + "')";
                MySqlCommand command = new MySqlCommand(insertQuery + query, con);
                using (MySqlDataReader reader = command.ExecuteReader()) {
                    return true;
                }
            }
            catch (Exception ex) { return false; }
        }

        /* Cancels/deletes a ticket from the database
         */
        public bool cancelTicket(Ticket ticket) {
            try {
                string query = "`" + db + "`.`tickets` where `seatID`=" + ticket.seatID + " and `flightID`=" + ticket.flightID +
                        " and `ownerEmail`='" + ticket.ownerEmail + "'";
                using (MySqlCommand command = new MySqlCommand(deleteQuery + query, con))
                    using (MySqlDataReader reader = command.ExecuteReader())
                        reader.Read();
                return true;
            }
            catch (Exception ex) { return false; }
        }

        //Used by cancelFlight() method

        private bool cancelAllTickets(int flightID) {
            try {
                string query = "`" + db + "`.`tickets` where `flightID`=" + flightID;
                using (MySqlCommand command = new MySqlCommand(deleteQuery + query, con))
                    using (MySqlDataReader reader = command.ExecuteReader())
                        reader.Read();
                return true;
            }
            catch (Exception ex) { return false; }
        }

        public void emailOwner() {
            //This is a placeholder method, as the program does not currently have the capabilities to send automatic emails
        }
    }
}
