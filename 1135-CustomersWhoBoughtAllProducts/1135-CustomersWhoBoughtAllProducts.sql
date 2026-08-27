-- Last updated: 8/27/2026, 10:27:19 PM
# Write your MySQL query statement below
SELECT
    customer_id
FROM Customer
GROUP BY customer_id
HAVING COUNT(DISTINCT product_key) = (
    SELECT COUNT(*)
    FROM Product
);