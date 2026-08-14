-- Last updated: 8/15/2026, 12:08:07 AM
# Write your MySQL query statement below
select uni.unique_id, emp.name
from employees emp
left join employeeuni uni
on emp.id=uni.id; 