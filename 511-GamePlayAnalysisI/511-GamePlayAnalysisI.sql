-- Last updated: 9/24/2026, 11:40:04 PM
# Write your MySQL query statement below
SELECT player_id,min(event_date) as first_login
FROM Activity
GROUP BY player_id;