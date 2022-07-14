/*program 23.
create class "EMPLOYEE"
members emp_id,emp_name,
emp_basic_salary,HRA(12%),
DA(10%),net_salary.

member Functioon()
get_data()
Claculate()
display().
*/

#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#define n 1

class employee
{
	int emp_id;
	char emp_name[20];
	float bsalary,hra,da,net_salary;

	public:
		void getdata()
		{
			cout<<"Enter Emp ID:";
			cin>>emp_id;
			cout<<"Enter employee Name:";
			cin>>emp_name;
			cout<<"Enter Basic Salary:";
			cin>>bsalary;
		}
		void calculate()
		{
			da=(bsalary*10)/100;
			hra=(bsalary*12)/100;
			net_salary=bsalary+da+hra;
		}
		void putdata()
		{
			cout<<emp_id<<"\t"<<emp_name<<"\t"<<bsalary<<"\t\t"<<da<<"\t"<<hra<<"\t"<<net_salary<<"\n";
		}
};
int i;
void main()
{
	employee e[50];
	clrscr();

	for(i=0;i<n;i++)
	{
		e[i].getdata();
	}
	for(i=0;i<n;i++)
	{
		e[i].calculate();
	}
	cout<<"\nId\tNAME\tB_Salary\tDA\tHRA\tN_Salary\n";
	for(i=0;i<n;i++)
	{
	e[i].putdata();
	}
	getch();
}