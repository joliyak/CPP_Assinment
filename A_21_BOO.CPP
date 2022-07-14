/*
Program No.21
*/
#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
int n;

class book
{
	int b_code;
	char title[10],author[10],edition[10],publisher[10];
	public:
		void get_data();
		void find(book *b);
		void display();
};
void book::get_data()
{
	cout<<"Enter book Code ->";cin>>b_code;
	cout<<"Enter book Title ->";cin>>title;
	cout<<"Enter book Author ->";cin>>author;
	cout<<"Enter book Edition ->";cin>>edition;
	cout<<"Enter book Publisher ->";cin>>publisher;
}
void book::find(book *b)
{
	int flag=0;
	char t[10];
	cout<<"Which book you want to find ? \n-->";
	cin>>t;
	for(int i=0;i<n;i++)
	{
		if(strcmp(b[i].title,t)==0)
		{
			flag=1;
			break;
		}
		else
		{
			flag=0;
		}
	}
	if(flag==1)
	{
		cout<<"Book Found\n\n";
		cout<<b[i].b_code<<"\t"<<b[i].title<<"\t"<<b[i].author<<"\t"<<b[i].edition<<"\t"<<b[i].publisher<<endl;
	}
	else
	{
		cout<<"Not Found";
	}
}
void book::display()
{
	cout<<b_code<<"\t"<<title<<"\t"<<author<<"\t"<<edition<<"\t"<<publisher<<endl;
}
void main()
{
	book b[10],temp;
	clrscr();
	cout<<"How many books do you want ?\n-->";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		b[i].get_data();
	}
	cout<<"B_code\tTitle\tAuthor\tEdition\tPublisher\n";
	for(i=0;i<n;i++)
	{
		b[i].display();
	}
	temp.find(b);
	getch();

}
