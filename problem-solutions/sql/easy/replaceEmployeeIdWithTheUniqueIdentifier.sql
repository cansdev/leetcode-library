/* Write your PL/SQL query statement below */
SELECT e1.name, e2.unique_id
FROM Employees e1
LEFT JOIN EmployeeUNI e2 ON e1.id = e2.id;