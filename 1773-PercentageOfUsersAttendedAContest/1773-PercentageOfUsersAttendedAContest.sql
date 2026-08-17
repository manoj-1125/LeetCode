-- Last updated: 8/17/2026, 11:49:48 PM
SELECT
    r.contest_id,
    ROUND(COUNT(r.user_id) * 100.0 /(SELECT COUNT(*) FROM Users),2) AS percentage
FROM Register r
GROUP BY r.contest_id
ORDER BY percentage DESC, r.contest_id ASC;