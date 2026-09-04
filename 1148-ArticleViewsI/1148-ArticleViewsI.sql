-- Last updated: 9/4/2026, 11:55:44 PM
# Write your MySQL query statement below
select distinct author_id as id from views
where author_id=viewer_id
order by id;