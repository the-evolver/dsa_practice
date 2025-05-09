# Write your MySQL query statement below
SELECT    D.name AS DEPARTMENT , 
          E.name AS EMPLOYEE , 
\t\t  E.salary
     FROM EMPLOYEE AS E 
\t               JOIN 
\t\t\t\t   DEPARTMENT AS D 
\t\t\t\t   ON E.departmentId = D.id
     WHERE E.salary =   ( SELECT MAX(salary) # this subquery gives max salary  of an department so that we can generate all employees who have max salary in that department.
                                 FROM EMPLOYEE
                                 WHERE departmentID = E.departmentID);