select * from logs;

select num,min(id) from logs group by num order by num

#modify the id a lil differently eh;
SET @ide = 1;
select num,
    (case  when 
from logs