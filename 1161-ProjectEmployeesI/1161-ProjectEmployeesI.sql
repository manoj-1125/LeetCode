-- Last updated: 8/17/2026, 11:50:13 PM
# Write your MySQL query statement below
# Write your MySQL query statement below
select 
    p.project_id, 
    ROUND(AVG(e.experience_years),2) as average_years
from project p left join employee e
on p.employee_id=e.employee_id
group by p.project_id;
