/* Write your PL/SQL query statement below */
select w1.id as Id
from weather w1
join weather w2 on w1.recorddate = w2.recorddate + 1
where w1.temperature > w2.temperature