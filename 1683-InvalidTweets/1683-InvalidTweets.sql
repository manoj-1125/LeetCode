-- Last updated: 9/4/2026, 11:55:06 PM
# Write your MySQL query statement below
select tweet_id from tweets
where length(content)>15;