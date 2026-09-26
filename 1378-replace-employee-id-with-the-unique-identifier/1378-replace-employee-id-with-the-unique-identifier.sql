# Write your MySQL query statement below
#staring with my sql 
SELECT 
    EmployeeUNI.unique_id, 
    Employees.name
FROM Employees
LEFT JOIN EmployeeUNI 
    ON Employees.id = EmployeeUNI.id;