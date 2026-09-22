-- Last updated: 9/22/2026, 6:14:01 PM
# Write your MySQL query statement below
DELETE p1
FROM Person p1
JOIN Person p2
    ON p1.email = p2.email
    AND p1.id > p2.id;