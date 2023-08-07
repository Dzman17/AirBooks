#----------Creates User------------------
CREATE USER 'AirBooksDBHandler'@'localhost'
IDENTIFIED BY 'a1r-0-dYnam!cs';

GRANT ALL
ON `air-books`.*
TO 'AirBooksDBHandler'@'localhost';
#----------Creates User------------------

#-------Creates Schema and Tables--------
CREATE SCHEMA `air-books`;

CREATE TABLE `air-books`.`account` (
  `email` varchar(60) NOT NULL DEFAULT 'email@email.com',
  `password` varchar(30) NOT NULL DEFAULT 'password',
  `firstName` varchar(20) NOT NULL DEFAULT 'John',
  `lastName` varchar(20) NOT NULL DEFAULT 'Doe',
  `accountType` char(1) NOT NULL DEFAULT 'c',
  PRIMARY KEY (`email`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

CREATE TABLE `flights` (
  `flightID` int NOT NULL DEFAULT '0',
  `time` datetime NOT NULL DEFAULT '1000-01-01 00:00:00',
  `destination` varchar(40) NOT NULL DEFAULT 'Harrisburg',
  `rows` int NOT NULL DEFAULT '1',
  `columns` int NOT NULL DEFAULT '1',
  `price` double NOT NULL DEFAULT '300',
  `luggageMax` double NOT NULL DEFAULT '2000',
  `currentLuggage` double NOT NULL DEFAULT '0',
  PRIMARY KEY (`flightID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

CREATE TABLE `air-books`.`tickets` (
  `seatID` int NOT NULL DEFAULT '1',
  `flightID` int NOT NULL DEFAULT '0',
  `ownerEmail` varchar(60) NOT NULL DEFAULT 'email@email.com',
  PRIMARY KEY (`seatID`,`flightID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
#-------Creates Schema and Tables--------

#----------Creates Test Objects----------
insert into account values('manager@test.com', 'managerPass', 'Einrique', 'YoMama', 'm');
insert into account values('employee@test.com', 'employeePass', 'Steve', 'Jobs', 'e');
insert into account values('customer@test.com', 'customerPass', 'Harry', 'Grills', 'c');
insert into flights values();
insert into flights values(1, '1200-01-01 5:00:00', 'house', 10, 10, 300.00, 60, 0);
insert into flights values(2, '2023-09-05 16:30:00', 'Bloomington', '28', '7', 120, 0);
#----------Creates Test Objects----------
