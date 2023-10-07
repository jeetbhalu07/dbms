# dbms
Q-1) create table with insert,update,select and order by.(10 marks)

create table student1 (s_id varchar2(20) primary key,s_name varchar2(10),s_rollno number(8,2));
insert into student1 values('1','varun',26);
insert into student1 values('2','vaibhav',27);
insert into student1 values('3','jenil',28);
insert into student1 values('4','gopu',29);
insert into student1 values('5','bhati',30);
select * from student1;
update student1 set s_name='mayank' where s_id='4';
delete from student1 where s_id='3';

Q-2) create view (10 marks) 

create table student1 (s_id varchar2(20) primary key,s_name varchar2(10),s_rollno number(8,2));
insert into student1 values('1','varun',26);
insert into student1 values('2','vaibhav',27);
insert into student1 values('3','jenil',28);
insert into student1 values('4','gopu',29);
insert into student1 values('5','bhati',30);
select * from student1;
update student1 set s_name='mayank' where s_id='4';
delete from student1 where s_id='3';
create view ram as select s_name,s_rollno from student1 where s_id<5
select * from ram
drop view ram;

Q-3 create and use sequence with mention table(10 marks)

create sequence sequence_1 start with 1 increment by 1 minvalue 0 maxvalue 100 cycle;
create table meet(id number(10),name varchar2(20));
insert into meet values(sequence_1.nextval,'raju');
select * from meet;
drop sequence sequence_1;

Q-4 perfrom SQL joins(inner join left and right join,self(full join)) (10 marks)

create table student(s_in varchar2(10) primary key , s_name varchar2(20), s_age number(8,2));
drop table studentcours;
insert into student values('5','vaibhav','20');
select * from student;
create table studentcours(c_id varchar2(10) , roll_no number(8,2));
insert into studentcours values('3', '4');
select * from studentcours;
select studentcours.c_id, student.s_name, student.s_age from student inner join studentcours on
student.s_in = studentcours.roll_no;
select studentcours.c_id, student.s_name, student.s_age from student left join studentcours on
student.s_in = studentcours.roll_no;
select studentcours.c_id, student.s_name, student.s_age from student right join studentcours on
student.s_in = studentcours.roll_no; 
select studentcours.c_id, student.s_name, student.s_age from student full join studentcours on
student.s_in = studentcours.roll_no; 

Q-5 create procedure (10 marks)

create or replace procedure greetings
AS
BEGIN dbms_output.put_line('hello');
END;
