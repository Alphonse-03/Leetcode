# Write your MySQL query statement below
select name as Employee from employee as e
where (select 1 from employee where
            id=e.managerId and e.salary>salary)