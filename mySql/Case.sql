-- CASE -- 
USE learn_db;

SELECT 
	fname,
    salary,
    CASE
		WHEN salary >= 40000 THEN 'Higher Salary'
        ELSE 'Low Salary'
	END AS 'Salary Category'
FROM
	employees1;
    
SELECT 
	fname,
    salary,
    CASE 
		WHEN salary >= 50000 THEN 'Higher Salary'
        WHEN salary >= 40000 AND salary < 50000 THEN 'Mid Salary'
		ELSE 'Low Salary'
	END AS 'Salary Category'
FROM
	employees1;
