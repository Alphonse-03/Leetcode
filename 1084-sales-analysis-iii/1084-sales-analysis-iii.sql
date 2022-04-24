# Write your MySQL query statement below
select distinct a.product_id ,a.product_name 
from Product as a
inner join sales as b on a.product_id =b.product_id   
group by b.product_id
having min(b.sale_date) >= '2019-01-01' 
    and max(b.sale_date) <= '2019-03-31'
