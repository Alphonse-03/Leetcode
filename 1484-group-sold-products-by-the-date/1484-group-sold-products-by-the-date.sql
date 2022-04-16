# Write your MySQL query statement below
select a.sell_date,
COUNT(DISTINCT(product)) AS num_sold, 
GROUP_CONCAT(DISTINCT product ORDER BY product ASC SEPARATOR ',') AS products

from activities as a
group by a.sell_date;


# SELECT sell_date,
# 		COUNT(DISTINCT(product)) AS num_sold, 
# 		GROUP_CONCAT(DISTINCT product ORDER BY product ASC SEPARATOR ',') AS products
# FROM Activities
# GROUP BY sell_date
# ORDER BY sell_date ASC
# (select product from activities as c where a.sell_date=c.sell_date ) as products