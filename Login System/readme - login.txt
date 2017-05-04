// Sample user login system - still a work in progress…
// included files:
//	auth.php
//	connect.php
// 	db.php
//	exclusive.php
//	logout.php
// 	registration.php
//	style.css

--- Database Schema ---

CREATE DATABASE dbtest;

CREATE TABLE IF NOT EXISTS `users` (
 `id` int(11) NOT NULL AUTO_INCREMENT,
 `username` varchar(50) NOT NULL,
 `email` varchar(50) NOT NULL,
 `password` varchar(50) NOT NULL,
 `salt` varchar[6] NOT NULL,
 `registered` datetime NOT NULL,
 PRIMARY KEY (`id`)
);


TO DO:
    allow a user to register

    login system
        redirects if success
        message if fail

    reset pass
