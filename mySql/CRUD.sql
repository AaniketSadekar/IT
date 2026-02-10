-- CRUD OPERATIONS -- 

-- List All Existing Database --
SHOW DATABASES;

-- List All Existing Table in Database --
SHOW TABLES;

-- Creating a new Database -- 
CREATE DATABASE test_db;
CREATE DATABASE learn_db;

-- Working with a Database -- 
USE learn_db;

-- Deleting a Database -- 
DROP DATABASE test_db;

-- CREATE TABLE -- 
CREATE TABLE person(
	id INT,
    name VARCHAR(50),
    city VARCHAR(50)
);

-- Checking your table 
DESC person;

-- Insert Data into table -- 
INSERT INTO person 
VALUES (101,"Raju","Delhi"),
	   (102,"Sham","Mumbai"),
       (103,"Paul","Chennai"),
       (104,"Alex","Pune");
       
       
-- Reading Data into table 
SELECT * FROM person;
SELECT id,name FROM person;

-- ALISA


-- Update / Modify Data
UPDATE persono
SET city = "Satara" WHERE id = 103;

-- DELETE Data froma table --
DELETE FROM person
WHERE id = 104;

-- Delete Table -- 
DROP TABLE person;









