-- Last updated: 8/15/2026, 4:40:27 PM
# Write your MySQL query statement below
select e.name, b.bonus from employee e
left join bonus b on e.empid=b.empid
where b.bonus<1000 or b.bonus is null;