-- Last updated: 8/17/2026, 11:50:57 PM
# Write your MySQL query statement below
select* from cinema
where id%2!=0 and description!="boring"
order by rating desc;