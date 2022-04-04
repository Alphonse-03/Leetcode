SELECT e.Name AS Employee
FROM Employee e
inner JOIN Employee m ON e.ManagerId=m.Id
WHERE e.Salary>m.Salary