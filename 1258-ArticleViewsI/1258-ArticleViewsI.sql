-- Last updated: 8/15/2026, 12:08:10 AM
# Write your MySQL query statement below
select distinct author_id as id from views
where author_id=viewer_id
order by id;