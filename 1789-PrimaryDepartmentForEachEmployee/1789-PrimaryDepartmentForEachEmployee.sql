-- Last updated: 9/4/2026, 11:54:45 PM
# Write your MySQL query statement below
SELECT
    employee_id,
    department_id
FROM Employee
WHERE primary_flag = 'Y'
   OR employee_id IN (
        SELECT employee_id
        FROM Employee
        GROUP BY employee_id
        HAVING COUNT(*) = 1
   );