/*
Program No.9
*/
#include<iostream.h>
#include<conio.h>
#include<string.h>
class student
{
	int roll_no;
	char name[20];
	char mobile[13],gread[5],result[5];
	float oracle,java,networking;
	float totle;
	float per;
	public:
		void input();
		void process();
		void output();
};
void student::input()
{
	cout<<"\nEnter Roll No. -->";
	cin>>roll_no;
	cout<<"\nEnter Name -->";
	cin>>name;
	cout<<"\nEnter Mobile No. -->";
	cin>>mobile;
	do
	{
		cout<<"\nEnter Marks of Oracle -->";
		cin>>oracle;
	}while(oracle<=0 || oracle>=100);
	do
	{
		cout<<"\nEnter Marks of Java -->";
		cin>>java;
	}while(java<=0 || java>=100);
	do
	{
		cout<<"\nEnter Marks of Networking -->";
		cin>>networking;
	}while(networking<=0 || networking>=100);
}
void student::process()
{
	totle=oracle+java+networking;
	if(oracle>=28 &&java>=28 && networking>=28)
	{
		per=totle/3.0;
	}
	else
	{
		per=0.00;
	}
	if(per>=70&&per<=99)
		strcpy(gread,"A");
	else if(per>=60&&per<70)
		strcpy(gread,"B");
	else if(per>=50&&per<60)
		strcpy(gread,"C");
	else if(per>=40&&per<50)
		strcpy(gread,"D");
	else if(per>=33&&per<40)
		strcpy(gread,"E");
	else if(per<33)
		strcpy(gread,"F");
	if(per<33)
		strcpy(result,"Fail");
	else
		strcpy(result,"Pass");
}
void student::output()
{
	cout<<"\nRoll_no -->"<<roll_no;
	cout<<"\nName -->"<<name;
	cout<<"\nMobile No."<<mobile;
	cout<<"\nOracle -->"<<oracle;
	cout<<"\nJava -->"<<java;
	cout<<"\nNetworling -->"<<networking;
	cout<<"\nTotle -->"<<totle;
	cout<<"\nPer -->"<<per;
	cout<<"\nGread -->"<<gread;
	cout<<"\nResult -->"<<result;
}
void main()
{
	clrscr();
	student s;
	s.input();
	s.process();
	s.output();
	getch();
}