/*
Program no.7
Create a class"employee".
data members like
-emp_no,emp_name,bsalary,ta,da,hra,pf,net_salary;
take only emp_no,name,bsalary with getdata();
calculate()
-ta(10%),da(40%),hra(25%),pf(15%) from bsalary,
and final salary store into net_salary,
display all data in putdata();
*/
#include<iostream.h>
#include<conio.h>

class employee
{
	int emp_no;
	char emp_name[20];
	float bsalary;
	float ta,da,hra,pf,net_salary;
	public:
		void get_data();
		void calculate();
		void put_data();
};
void employee::get_data()
{
	cout<<"\nEnter Emp_No. -->";
	cin>>emp_no;
	cout<<"\nEnter Emp_name -->";
	cin>>emp_name;
	cout<<"\nEnter Basic Salary -->";
	cin>>bsalary;
}
void employee::calculate()
{
	ta=(bsalary/100)*10;
	da=(bsalary/100)*40;
	hra=(bsalary/100)*25;
	pf=(bsalary/100)*15;
	net_salary=(ta+da+hra+bsalary)-pf;
}
void employee::put_data()
{
	cout<<"\nEmp_No -->"<<emp_no;
	cout<<"\nEmp_Name -->"<<emp_name;
	cout<<"\nBasic Salary -->"<<bsalary;
	cout<<"\nTA -->"<<ta;
	cout<<"\nDA -->"<<da;
	cout<<"\nHRA -->"<<hra;
	cout<<"\nPF -->"<<pf;
	cout<<"\nNet Salary -->"<<net_salary;
}
void main()
{
	employee e;
	clrscr();
	e.get_data();
	e.calculate();
	e.put_data();
	getch();
}
