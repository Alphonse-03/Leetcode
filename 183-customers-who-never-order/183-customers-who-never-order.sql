# Write your MySQL query statement below
# select c.name as Customers
# from customers as c
# where c.id <> all (select customerId from Orders);

select name as Customers
from customers c
left join orders o
on c.id=o.customerId
where o.customerId is NULL;