-- Last updated: 8/17/2026, 11:17:38 PM
# Write your MySQL query statement below
select 
    s.user_id, 
    ROUND(COALESCE(AVG(c.action="confirmed"),0),2) as confirmation_rate
from signups s left join confirmations c
on s.user_id=c.user_id
group by s.user_id;