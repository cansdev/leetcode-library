/* Write your PL/SQL query statement below */
select name, bonus 
from employee e
left outer join bonus b on e.empId = b.empId 
where (bonus<1000 or bonus is null)