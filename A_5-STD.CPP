#include<iostream.h>
#include<conio.h>
#include<string.h>
#define n 2

class student
{
	int id;
	char name[20];
	float per;
	char college_name[20];
	public:
		void get();
		void sort(student *s);
		void put();
};
void student::get()
{
	cout<<"\nEnter student ID -->";
	cin>>id;
	cout<<"\nEnter Student Name -->";
	cin>>name;
	cout<<"\nEnter per -->";
	cin>>per;
	cout<<"\nEnter College Name -->";
	cin>>college_name;
}
void student::sort(student *s)
{
	student t;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(strcmp(s[i].college_name,s[j].college_name)<0)
			{
				t=s[i];
				s[i]=s[j];
				s[j]=t;
			}
		}
	}
}

void student::put()
{
	cout<<"\n"<<id<<"\t"<<name<<"\t"<<per<<"\t"<<college_name;
}
void main()
{
	clrscr();
	student s[11],temp;
	for(int i=0;i<n;i++)
	{
		s[i].get();
	}
	cout<<"\nDisplay\nID\tName\tPER\tCollege_Name";
	for(i=0;i<n;i++)
	{
		s[i].put();
	}
	temp.sort(s);
	cout<<"\nSorted\nID\tName\tPER\tCollege_Name";
	for(i=0;i<n;i++)
		s[i].put();
	getch();
}