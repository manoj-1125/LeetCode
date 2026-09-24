-- Last updated: 9/24/2026, 11:40:33 PM
# Write your MySQL query statement below
select name
from salesperson
where sales_id not in(
    select o.sales_id 
    from orders o
    join company c
    on o.com_id=c.com_id 
    where c.name="red"
);