 select * from student where city not in('surat','vapi');
 select * from student where city in('surat','vapi');
  select * from student where city="surat" or city="vapi";
  select * from student where city="surat" or age>=15 or std_class="10th";
  select name from student where not city="surat" and age>=15;
  select* from student limit 2 offset 3;  -- offset value will not be included
  select* from student limit 2 offset 2; -- now it will start from 3.
  select name ,city from student order by name desc;
  select name ,city from student order by name asc;
   select name ,city from student order by name asc,city desc;
    select name as stud_name from student;
select * from student where name is null;
select * from student where name is not null;
-- aggreate function
select count(rollno)from student;
select min(age) from student;
select max(age) from student;
select sum(age) from student;
select avg(age) from student;

-- group bby
select count(rollno) ,city from student group by city;
select count(rollno), age from student where (age) >15 group by age;

-- having clause
select count(rollno),age 
from student 
where (age)>=15 
group by(age) 
having age>=15 
order by age desc;
-- --------------------------------------- 
-- joins:
-- inner join 
-- syntax:
-- select columnname from table_A inner join table_B on table_a.id=table_b.id;
-- find customer name,mode,payment_dt from table customer and payment

select name,mode,payment_dt from customer inner join payment on customer.cid=payment.cid;

-- left  outer join
-- select columnname from table_a left outer join table_b on table_a.cid=table_b.cid;
select * from customer left outer join payment on customer.cid=payment.cid;

-- right  outer join
-- select columnname from table_a right outer join table_b on table_a.cid=table_b.cid;
select * from customer right outer join payment on customer.cid=payment.cid;

-- full outer join

select * from customer left outer join payment on customer.cid=payment.cid 
union 
select * from customer right outer join payment on customer.cid=payment.cid;

-- self join
select c.name as customer_name, p.payment_dt,p.mode from customer c, payment p 
where c.cid=p.cid; 

