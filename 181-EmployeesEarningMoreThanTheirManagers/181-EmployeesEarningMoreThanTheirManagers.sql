-- Last updated: 9/22/2026, 6:14:08 PM
# Write your MySQL query statement below
SELECT e.name as employee 
FROM employee e
JOIN employee m
    on e.managerid=m.id
WHERE e.salary > m.salary;