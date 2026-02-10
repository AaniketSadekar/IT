-- EXERCISE 3 -- 
USE learn_db;


SELECT CONCAT_WS(':',id,fname,desig,dept) FROM employees1;

SELECT CONCAT_WS(':',id, CONCAT(fname,' ',lname), desig,dept) FROM employees1;

SELECT CONCAT_WS(':',id,fname,UPPER(desig),dept) FROM employees1;

SELECT CONCAT(LEFT(dept,1),id) FROM employees1;