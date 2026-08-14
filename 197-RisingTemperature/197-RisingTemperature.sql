-- Last updated: 8/15/2026, 1:53:44 AM
# Write your MySQL query statement below
select w1.id from weather w1
join weather w2
on datediff(w1.recorddate,w2.recorddate)=1
where w1.temperature>w2.temperature;