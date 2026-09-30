# Write your MySQL query statement below
select emp.name as Employee
from employee emp
inner join employee mgr
on (emp.managerId=mgr.id)
where emp.salary>ifnull(mgr.salary,emp.salary);