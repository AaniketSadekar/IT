-- OPERATORS -- 
USE learn_db;

-- RELATIONAL OPERATORS [<,<=,>,>=, != , = ]

SELECT * FROM employees1 WHERE salary < 30000;
SELECT * FROM employees1 WHERE salary <= 30000;
SELECT * FROM employees1 WHERE salary > 30000;
SELECT * FROM employees1 WHERE salary >= 60000;
SELECT * FROM employees1 WHERE salary != 25000;
SELECT * FROM employees1 WHERE salary = 25000;


-- Logical Operators 

-- AND -- 
SELECT * FROM employees1 WHERE dept = 'Loan' AND salary = 25000;

-- OR -- 
SELECT * FROM employees1 WHERE dept = 'Loan' OR salary = 25000;

-- IN -- 
SELECT * FROM employees1 WHERE dept IN('Loan','Cash','Account');

-- NOT IN --

SELECT * FROM employees1 WHERE dept NOT IN('Loan','Cash','Account');

-- BETWEEN -- 
SELECT * FROM employees1 WHERE salary BETWEEN 40000 AND 65000;
