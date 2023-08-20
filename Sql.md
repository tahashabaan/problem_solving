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
```
--select actor_id, director_id
-- from ActorDirector a
-- where a.timestamp = (
--        select a.timestamp   
--        from ActorDirector a
--        group by actor_id, director_id
--        having count(actor_id) >2 and count(director_id) > 2
-- ) 
```
### solution2:
```
    select actor_id, director_id
    from ActorDirector a
    group by actor_id, director_id
    having(timestamp) >= 3
```

[1075. Project Employees I](https://leetcode.com/problems/project-employees-i/description/)

### solution
```
SELECT project_id, ROUND(avg(experience_years) , 2) AS average_years
FROM Employee e
INNER JOIN Project p ON e.employee_id = p.employee_id
GROUP BY project_id;
```
[1084. Sales Analysis III](https://leetcode.com/problems/sales-analysis-iii/description/)
### solution:
```
select p.product_id , p.product_name
from Product p 
inner join Sales s on p.product_id = s.product_id
group by s.product_id
having min(s.sale_date) >='2019-01-01' and 
max(s.sale_date) <= '2019-03-31'
```
[1141. User Activity for the Past 30 Days I](https://leetcode.com/problems/user-activity-for-the-past-30-days-i/description/)
### solution:
```
select activity_date as day,
count(DISTINCT user_id) as active_users  
 from  Activity 
 group by activity_date 
having min(activity_date) >= '2019-06-28' 
and max(activity_date) <= '2019-07-27'
```






