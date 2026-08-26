-- Last updated: 8/26/2026, 9:42:05 PM
select max(num) as num
from(
    select num 
    from mynumbers
    group by num
    having count(*)=1
    )as unique_numbers;