-- STRING FUNCTIONS -- 
USE learn_db;

CREATE TABLE employees1(
	id INT PRIMARY KEY,
    fname VARCHAR(50) NOT NULL,
    lname VARCHAR(50) NOT NULL,
    desig VARCHAR(50) DEFAULT 'Saving',
    dept VARCHAR(50) NOT NULL
);

INSERT INTO employees1
VALUES 
       (106,"Rick","Watt","Manager","Account"),
       (107,"Leena","Jhonson","Lead","Cash"),
       (108,"John","Paul","Manager","It"),
       (109,"Alex","Watt","Probation","Loan");

ALTER TABLE employees1
ADD COLUMN salary INT NOT NULL DEFAULT 25000;

-- CONCAT -- 
SELECT id, CONCAT(fname," ",lname) FROM employees1;

-- CONCAT_WS -- 
SELECT CONCAT_WS('-',id,fname,lname) AS INFO FROM employees1;

-- SUBSTRING && SUBSTR  -- 
SELECT id,SUBSTRING(desig,1,3) FROM employees1;
SELECT id,SUBSTR(desig,1,3) FROM employees1;

-- REPLACE -- 
SELECT REPLACE(id,101, 1) FROM employees1;

-- REVERSE -- 
SELECT REVERSE(lname) FROM employees1;

-- UPPERCASE && UCASE -- 
SELECT UPPERCASE(fname) FROM employees1;
SELECT UCASE(fname) FROM employees1;

-- LOWER && LCASE -- 
SELECT LOWER(fname) FROM employees1;
SELECT LCASE(fname) FROM employees1;

-- CHAR_LENGTH -- 
SELECT CHAR_LENGTH(fname) FROM employees1;

-- INSERT -- 
SELECT INSERT(fname,0,1,"Emp") FROM employees1;

-- LEFT -- 
SELECT LEFT(fname,3) FROM employees1;

-- RIGHT -- 
SELECT RIGHT(fname,3) FROM employees1;

-- REPEAT -- 
SELECT REPEAT('HaHaHaHaHaHaHaHa',5) FROM employees1; 

-- TRIM -- 
SELECT TRIM("        CODER");
