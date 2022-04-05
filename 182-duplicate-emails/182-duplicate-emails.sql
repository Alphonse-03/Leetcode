# Write your MySQL query statement below
select distinct a.email as Email  from person as a ,person as b
where a.id<>b.id
and a.email=b.email;