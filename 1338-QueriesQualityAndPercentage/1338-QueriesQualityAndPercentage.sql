-- Last updated: 8/18/2026, 11:37:07 PM
SELECT
    query_name,
    ROUND(AVG(rating / position), 2) AS quality,
    ROUND(AVG(CASE WHEN rating < 3 THEN 1 ELSE 0 END) * 100,2) AS poor_query_percentage
FROM Queries
GROUP BY query_name;