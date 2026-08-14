-- Last updated: 8/15/2026, 12:08:35 AM
# Write your MySQL query statement below
select name
from customer
where referee_id is NULL or referee_id!=2;