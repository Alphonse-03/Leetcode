# Write your MySQL query statement below
select c.name as Customers
from customers as c
where c.id <> all (select customerId from Orders);