#include<iostream.h>
#include<conio.h>
#include<string.h>

class student
{
	int st_no;
	char name[20],add[40];
	long int phone;
	char course[20];
	public:
		student()
		{
			//name=new char[20];

		}
		student(char *n,char *a,long int p,char *c)
		{
			st_no=1;
			strcpy(name,n);
			strcpy(add,a);
			p=phone;
			strcpy(course,c);
		}
		void display();

};
void student::display()
{
	cout<<"\nST_No. ->"<<st_no;
	cout<<"\nName ->"<<name;
	cout<<"\nAddress"<<add;
	cout<<"\nPhone ->"<<phone;
	cout<<"\nCourse ->"<<course;
}
void main()
{
	clrscr();
	student s;
	student s1("JK","Mahuva",8789097,"BCA");
	s,s1.display();

	getch();
}