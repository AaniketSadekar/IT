-- CLASUE -- 
USE learn_db;

-- DISTINCT -- 
SELECT DISTINCT(dept) FROM employees1;

-- ORDER BY -- 
SELECT * FROM employees1 ORDER BY fname;
SELECT * FROM employees1 ORDER BY fname DESC;

-- LIKE -- 
SELECT * FROM employees1 WHERE fname LIKE 'A%';
SELECT * FROM employees1 WHERE fname LIKE '%A';
SELECT * FROM employees1 WHERE fname LIKE '____';

-- NOT LIKE --
SELECT * FROM employees1 WHERE fname NOT LIKE 'A%';

-- LIMIT -- 
SELECT * FROM employees1 LIMIT 3;
SELECT * FROM employees1 LIMIT 3,3;

-- COUNT -- 
SELECT COUNT(*) FROM employees1;

-- WHERE --
SELECT * FROM employees WHERE dept = 'Loan';

-- GROUP BY -- 
SELECT dept, COUNT(fname) FROM employees1 GROUP BY dept;

-- AGGREGATE FUNCTION
SELECT MAX(salary) FROM employees1;
SELECT MIN(salary) FROM employees1;
SELECT SUM(salary) FROM employees1;
SELECT AVG(salary) FROM employees1;


-- SUB QUERIES -- 
SELECT * FROM employees1 
	WHERE salary = (SELECT MAX(salary) FROM employees1);
    
-- IS NULL --
SELECT * FROM employees1 WHERE fname IS NULL;
