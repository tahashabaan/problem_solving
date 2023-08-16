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


