[ 619. Biggest Single Number](https://leetcode.com/problems/biggest-single-number/)

#### 1 -> solution: 619. Biggest Single Number
```
select max(num) as num
from MyNumbers 
 where num not in (
    select num 
    from MyNumbers
    group by num
    having count(1) > 1 
)
```
[620. Not Boring Movies](https://leetcode.com/problems/not-boring-movies/)
#### 2 -> solution: 620. Not Boring Movies
```
select * 
from Cinema 
where id % 2 <> 0 and description != 'boring'
order by rating desc
```
[627. swap-salary](https://leetcode.com/problems/swap-salary/)
#### 2 -> solution: 627. swap-salary
```
update Salary
set sex = 
case
 when sex = 'f'  THEN 'm'
 else  'f'
end;
```
[1050. Actors and Directors Who Cooperated At Least Three Times](https://leetcode.com/problems/actors-and-directors-who-cooperated-at-least-three-times/description/)

### solution1:
```--select actor_id, director_id
-- from ActorDirector a
-- where a.timestamp = (
--        select a.timestamp   
--        from ActorDirector a
--        group by actor_id, director_id
--        having count(actor_id) >2 and count(director_id) > 2
-- ) 
```
### solution2:
````select actor_id, director_id
    from ActorDirector a
    group by actor_id, director_id
    having(timestamp) >= 3
```






