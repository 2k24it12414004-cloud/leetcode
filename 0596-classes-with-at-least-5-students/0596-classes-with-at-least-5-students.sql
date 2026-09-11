# Write your MySQL query statement below
with students_per_class as
(
    select class
,count(student) as students_count
    from Courses
    group by class
)select class
    from students_per_class
    where students_count>=5
