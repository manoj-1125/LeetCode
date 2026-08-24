-- Last updated: 8/24/2026, 10:00:16 PM
# Write your MySQL query statement below
select class from courses
group by class
having count(*)>=5;