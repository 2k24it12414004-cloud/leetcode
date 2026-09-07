# Write your MySQL query statement below
-- select * from Person
select firstName,lastName,city,state from Person
left join Address
-- person value return if 
-- A LEFT JOIN in SQL is applied when you want to retrieve all rows from the left table and the matching rows from the right table. If there’s no match in the right table, the result will still include the left table’s row, but with NULL values for the right table’s columns.
on  person.personId=address.personId;

