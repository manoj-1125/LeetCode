-- Last updated: 8/15/2026, 12:08:01 AM
# Write your MySQL query statement below
select tweet_id from tweets
where length(content)>15;