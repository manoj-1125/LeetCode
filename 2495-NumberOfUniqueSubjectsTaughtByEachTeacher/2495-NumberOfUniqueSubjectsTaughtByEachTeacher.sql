-- Last updated: 8/22/2026, 1:30:17 AM
# Write your MySQL query statement below
select teacher_id, count(distinct subject_id) as cnt
from teacher
group by teacher_id;