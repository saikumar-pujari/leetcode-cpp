# Write your MySQL query statement below
select MAX(salary) AS SecondHighestSalary from Employee WHERE salary < (SELECT MAX(salary) FROM Employee);