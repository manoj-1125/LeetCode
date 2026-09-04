-- Last updated: 9/4/2026, 11:55:03 PM
# Write your MySQL query statement below
select user_id,count(*) as followers_count 
from followers
group by user_id
order by user_id;