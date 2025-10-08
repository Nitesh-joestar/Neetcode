select * from employee;

select employee_id,department_id from employee where primary_flag='Y'

union all

select employee_id,department_id from employee where (employee_id) in 
(select employee_id from employee group by employee_id having sum(case when primary_flag='N' then 0 else 1 end)=0) order by employee_id