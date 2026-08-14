-- Last updated: 8/15/2026, 12:08:13 AM
# Write your MySQL query statement below
select p.product_name, s.year, s.price from sales s
join product p on s.product_id=p.product_id; 