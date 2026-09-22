-- Last updated: 9/22/2026, 6:14:12 PM
# Write your MySQL query statement below
SELECT p.firstname, p.lastname, a.city, a.state
FROM person p
LEFT JOIN address a
    ON p.personid=a.personid;