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

 select * from customer;
 alter table customer add column age int;
 
 update customer set age =24 where cid=9;
 
 
 -- function :
 delimiter //
 create function getyear(age int) returns int deterministic
 begin
	declare curr_date date;
    select curdate() into curr_date;
    return year(curr_date)-age;
 end //
 delimiter ;
 -- calling  function
 select cid,name,age,getyear(age) as birth_year from customer;
 
 -- function cube
delimiter $$
 create function cube_n(num int) returns int deterministic 
 begin
	declare total int;
    set total=num*num*num;
    return total;
 end $$
 delimiter ;
 
 select cube_n(5) as cube_number;
 
 -- procedure with no parameter 
 delimiter //
 create procedure p1()
 begin 
	select * from customer where age >=30;
 end // 
 delimiter ;
 
 -- call procedure ;
 call p1();
 
 -- procedure with in parameter;
delimiter //
 create procedure p2(in c_age int)
 begin
	select * from customer where age=c_age;
 end //
delimiter ;
 
 call p2(35);
 
 -- procedure with in,out parameter
 delimiter //
 create procedure p3(c_id int, out c_age int,out c_name varchar(20))
 begin
	select age,name into c_age, c_name from customer where cid=c_id;
 end //
 delimiter ;
 
 call p3(5,@a,@n);
 select @a as age_call , @n as name ;
 
 drop procedure p4;
 
 -- procedur with inout parameter;
 delimiter //
 create procedure p4(in id int ,inout var1 varchar(20))
 begin
	select mode into var1 from payment where cid=id;
 end //
 delimiter ;

-- set @m='cash';
call p4(4,@m);
select @m as mode_pay;


 -- trigger 
delimiter //
create trigger age_default
before insert on customer for each row
begin 
	if new.age<=18 then set new.age=19;
    end if;
end // 
delimiter ;

drop trigger age_default;
insert into customer values(14,"riya",2,15);
select * from customer;

-- trigger

delimiter //
create trigger total_cust
after insert on customer for each row
begin
declare count int;
	set count=count +1;
end //
delimiter ;

-- tcl
insert into country values(7,"Mumbai","India");
commit;
savepoint b;
update country set city="New-York" where city_id=2;
savepoint a;

rollback to b;

