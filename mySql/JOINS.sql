-- JOINS --

-- CROSS JOIN => Every row form one table is combined wiht every row from another table.
SELECT * FROM customers,orders;


-- INNER JOIN => Return only the rows where there is a match between the specified column in both the left and right tables;
SELECT * FROM customers
INNER JOIN 
orders
ON orders.cust_id=customers.cust_id;


SELECT name, SUM(amount) FROM customers
INNER JOIN
orders
ON orders.cust_id = customers.cust_id
GROUP BY name;

-- LEFT JOIN => Return all rows from left table and the matching rows from the right table
SELECT * FROM customers
LEFT JOIN
orders
ON orders.cust_id=customers.cust_id;

SELECT name, IFNULL(SUM(amount),0) FROM customers
LEFT JOIN
orders
ON orders.cust_id=customers.cust_id
GROUP BY name;


-- RIGHT JOIN => Returns all rows fromt the right table and the matching rows from the left table
SELECT * FROM customers
RIGHT JOIN
orders
ON orders.cust_id=customers.cust_id;

SELECT name, IFNULL(SUM(amount),0) FROM customers
RIGHT JOIN
orders
ON orders.cust_id=customers.cust_id
GROUP BY name;
