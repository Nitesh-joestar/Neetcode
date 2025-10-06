// casing 
select s.user_id,round(avg(case when c.action='confirmed' then 1.00 else 0 end),2) confirmation_rate 
from signups s left JOIN confirmations c on s.user_id=c.user_id group by s.user_id;

where referee_id is null;

need to order by eveerything if i want to perform aggr operations;

<> is same as !=;

name='bengamin';

string starts with last name like 'S%'
string ends with last name like '%s'
contains LIKE '%o%'
WHERE first_name LIKE '_a%'; Jane;

length(content)>15;

left join, cross join, right join, join, inner join;

left join transactions b on a.visit_id=b.visit_id where b.transaction_id,  where clause outside join;
where can come after join and on, on is a joining condition where is a flitering one;

having clause is to filter after grouping and aggregation are done;

-- THIS QUERY WILL FAIL!
SELECT
    ProductCategory,
    SUM(SaleAmount) AS TotalSales
FROM
    sales
GROUP BY
    ProductCategory
WHERE
    SUM(SaleAmount) > 500; you want to filter where only sum above 500 is displayed u use having this written code fails;

datediff is an interesting and imp function which provides differnces in date,day and year and shit;

select t.name, t.bonus
from ( select e.name,b.bonus from employee e left join bonus b on e.empid=b.empid ) as t where t.bonus<1000 or t.bonus is null derived tables;

SELECT
    m.name
FROM
    Employee e
JOIN
    Employee m ON e.managerId = m.id
GROUP BY
    m.id, m.name
HAVING
    COUNT(e.id) >= 5;

order by and group by are diff;

u.purchase_date between p.start_date and p.end_date; dates;

you dont have to group by the thing you are summing
sum(u.units*p.price) as average_price,u.product_id group by u.product_id
as should be outside sum;

handling null cases 
IFNULL(ROUND(SUM(u.units * p.price) / SUM(u.units), 2), 0) AS average_price;

handling edge cases suppose there are null values in one table and none in another you should be careful abt which one u use
group by order a or b.product id be mindful. changes between a or b;

you can put this inside (select count(u.user_id) from users u)as total_users subbing a select query with a select query;

order by percentage desc,r.contest_id asc is cool bcoz it first orders by percentage and then respects it and does order by r.contest_id;

count(rating<3) doesnt work because rating<3 returns a boolean 1 if correct 0 if false
count counts everything and only doesnt count null. so basically its counting 1 and 0s. so sum it;

month(t1.trans_date)=month(t2.trans_date) month comparison if they r the same month;

date_format(t1.trans_date,'%Y-%m') date formatingg;

using case
sum(case when t1.state='approved0' then t1.amount else 0 end);

CASE input_expression
    WHEN value1 THEN result1
    WHEN value2 THEN result2
    ...
    ELSE else_result
END;

to find the average of something use average dawg thats the shit. dont do sum and devide;

bro did a creative way of sorting firsts like look at this
select customer_id,min(order_date) from delivery group by customer_id
what this does is groups by customer id right., so it firsts find the first order date when the order was first placed
next step
where (order_date,customer_id) in (select ) whatever that was above. now this creates a table, i think its basically a join lemme check
yeh join works tooo
select * from delivery a join
(select customer_id,min(order_date) as order_date from delivery group by customer_id)as t on a.customer_id=t.customer_id and a.order_date=t.order_date;
basically where (order_date,customer_id) in (select) does
is the same as join on 
remeber join on and where are kinda similiar and can be used in conjunction;

groupibng by brother 
select t.teacher_id,count(t.subject_id) as cnt
from (select teacher_id,subject_id from teacher group by subject_id,teacher_id)as t group by teacher_id;

if they say first of something immediately go min aight 
select product_id,year as first_year,quantity,price from sales where(product_id,year) in (select product_id,min(year) as year from sales group by product_id)
immediately go to min no brainer;

if they ask something like unique then you go select teacher_id,subject_id from teacher group by subject_id,teacher_id
groupibng by brother 
select t.teacher_id,count(t.subject_id) as cnt
from (select teacher_id,subject_id from teacher group by subject_id,teacher_id)as t group by teacher_id; 

use having bro
select count(student) as cnt,class from courses group by class having cnt>5;

in cases where you have to go where there are this number of thigns in a colooumn use having
select class from courses group by class having count(student)>5;

having count(distinct product_key)=(select count(distinct product_key) from product);