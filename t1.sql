create table backup(id_num int,fname varchar(20),minit varchar(10),lname varchar(30),city_id int);

delimiter //
create trigger t2
after insert on employees for each row
begin
	insert into backup values(new.id_num,new.fname,new.minit,new.lname,new.city_id);
end //
delimiter ;


insert into employees values (7,"Smith","K","John",2),(6,"Riya","H","Patel",3);

select * from  backup;