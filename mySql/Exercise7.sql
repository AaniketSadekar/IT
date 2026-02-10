-- Exercise 7 --

SELECT * FROM employees1 WHERE salary BETWEEN 30000 AND 40000;

SELECT * FROM employees1 WHERE fname LIKE 'R%' OR 'S%';

SELECT * FROM employees1 WHERE salary = 25000 AND dept = 'Cash';

SELECT * FROM employees1 WHERE desig IN('Manager','Lead','Associate');

SELECT 
	fname,
    salary,
    CASE
		WHEN salary != 0 THEN salary / 91
	END AS 'Salary In $'
FROM
	employees1;