-- Last updated: 9/22/2026, 6:14:03 PM
# Write your MySQL query statement below
SELECT c.name as Customers
FROM customers c
LEFT JOIN orders o
    ON o.customerid=c.id
WHERE o.customerid is null;