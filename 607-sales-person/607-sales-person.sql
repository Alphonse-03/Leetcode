# Write your MySQL query statement below
select name from salesperson
where sales_id not in(
    select o.sales_id from orders as o
    inner join company as c on c.com_id=o.com_id
    where c.name='RED');