CREATE SCHEMA `air-Books`;

CREATE TABLE `air-books`.`account` (
  `email` varchar(60) NOT NULL DEFAULT 'email@email.com',
  `password` varchar(30) NOT NULL DEFAULT 'password',
  `firstName` varchar(20) NOT NULL DEFAULT 'John',
  `lastName` varchar(20) NOT NULL DEFAULT 'Doe',
  `accountType` char(1) NOT NULL DEFAULT 'c',
  PRIMARY KEY (`email`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

CREATE TABLE `air-books`.`flights` (
  `flightID` int NOT NULL DEFAULT '0',
  `time` datetime NOT NULL DEFAULT '1000-01-01 00:00:00',
  `destination` varchar(40) NOT NULL DEFAULT 'Harrisburg',
  `rows` int NOT NULL DEFAULT '1',
  `columns` int NOT NULL DEFAULT '1',
  `price` int NOT NULL DEFAULT '300',
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
