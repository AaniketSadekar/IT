-- RELATIONSHIP -- 
USE learn_db;

CREATE TABLE customers(
	cust_id INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(50),
    email VARCHAR(50)
);

CREATE TABLE orders(
	ord_id INT AUTO_INCREMENT PRIMARY KEY,
    date DATE,
    amount DECIMAL(10,2),
    cust_id INT,
    FOREIGN KEY (cust_id) REFERENCES customers(cust_id) ON DELETE CASCADE
);

-- CHECK FOREIGN KEY --
SELECT CONSTRAINT_NAME, COLUMN_NAME, REFERENCED_TABLE_NAME  FROM
INFORMATION_SCHEMA.KEY_COLUMN_USAGE WHERE TABLE_NAME = 'orders';


INSERT INTO customers(name,email)
VALUES ("Baburoa","babu@gmail.com"),("Paul","paul@gmail.com"),("Alex","alex@gmail.com");

SELECT * FROM customers;

INSERT INTO orders(date,amount,cust_id)
VALUES ('2023-8-20',105.38,1),('2023-08-20',503.38,1),
	   ('2023-08-21',400.00,5),('2023-08-21',700.00,4),
       ('2023-8-21',400.00,5),('2023-08-21',1000.00,3),
       ('2023-08-21',1100.00,1),('2023-08-21',900.00,4),
       ('2023-09-22',100.90,1);

SELECT * FROM orders;

DROP TABLE orders;