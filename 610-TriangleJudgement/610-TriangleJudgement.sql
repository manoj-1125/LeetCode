-- Last updated: 9/2/2026, 11:19:14 PM
# Write your MySQL query statement below
SELECT x,y,z,
    CASE
        WHEN x + y > z
         AND x + z > y
         AND y + z > x
        THEN 'Yes'
        ELSE 'No'
    END AS triangle
FROM Triangle;