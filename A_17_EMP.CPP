/*
Program No. 17
*/
#include<iostream.h>
#include<conio.h>

class Employee
{
	int emp_no;
	char emp_name[20],dept[20];
	float salary,ta,da,pf,net_salary;
	public:
		Employee()
		{
			cout<<"\nEnter Emp No. ->";
			cin>>emp_no;
			cout<<"\nEnter Emp name ->";
			cin>>emp_name;
			cout<<"\nenter Dept ->";
			cin>>dept;
			cout<<"\nEnter salary ->";
			cin>>salary;
		}
		void display();
		void calculate();

};
void Employee::calculate()
{
	ta=(salary*10)/100;
	da=(salary*8)/100;
	pf=(salary*5)/100;

	net_salary=(salary+ta+da)-pf;
}
void Employee::display()
{
	cout<<"\nEmp_No. ->"<<emp_no;
	cout<<"\nName ->"<<emp_name;
	cout<<"\nDept ->"<<dept;
	cout<<"\nSalary ->"<<salary;
	cout<<"\nTa ->"<<ta;
	cout<<"\nDA ->"<<da;
	cout<<"\nPf ->"<<pf;
	cout<<"\nNet Salary ->"<<net_salary;
}
void main()
{
	clrscr();
	Employee E;
	E.calculate();
	E.display();
	getch();
}
