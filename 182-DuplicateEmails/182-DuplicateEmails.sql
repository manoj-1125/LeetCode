-- Last updated: 9/22/2026, 6:14:06 PM
# Write your MySQL query statement below
SELECT email
FROM person
GROUP BY email 
HAVING count(*)>1;