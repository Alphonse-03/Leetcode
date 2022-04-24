# Write your MySQL query statement below
select actor_id,director_id from actorDirector
group by(actor_id*1000+director_id)
having count(actor_id*1000+director_id)>2;