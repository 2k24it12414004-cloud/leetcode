# Write your MySQL query statement below
with temp as(
select id, num,
lag(num,1) over(order by id) as p
,lag(num,2) over(order by id) as n
from logs
)
select distinct num as ConsecutiveNums
from temp
where num=p and num=n;