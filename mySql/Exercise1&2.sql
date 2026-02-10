-- EXERCISE 1 & 2 --

USE learn_db;

CREATE TABLE employees(
	emp_id INT PRIMARY KEY AUTO_INCREMENT,
    name VARCHAR(50) NOT NULL,
    desig VARCHAR(50) DEFAULT 'Probation',
    dept VARCHAR(50) NOT NULL
);

INSERT INTO employees (name,desig,dept)
VALUES ("Sham","Cashier","Cash"),
	   ("Paul","Associate","Loan"),
       ("Alex","Accountant","Account"),
       ("Victor","Associate","Deposit");
       
       
SELECT * FROM employees;

SELECT emp_id,name FROM employees;

SELECT * FROM employees WHERE dept = "Loan";

SELECT * FROM employees WHERE emp_id = 101;

SELECT emp_id, name FROM employees WHERE emp_id = 101;

 UPDATE employees
	SET dept = 'IT' WHERE emp_id = 103;
    
DELETE FROM employees WHERE emp_id = 105;
