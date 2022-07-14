#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<string.h>

class account
{
	int acc_no;
	char name[20];
	float bal;
	public:
		account()
		{
			acc_no=1;
			strcpy(name,"JK");
			bal=1000;
		}
		void deposite();
		void withdraw();
		void display();
};
void account::deposite()
{
//	account a;
	float value;
	cout<<"\nEnter value to Deposite -->";
	cin>>value;
	bal=bal+value;
}
void account::withdraw()
{
	float value;
	cout<<"\nEnter value to withdraw -->";
	cin>>value;
	if(value>bal)
	{
		cout<<"\nInvaled Balance ";
	}
	else
	{
		bal=bal-value;
	}
}
void account::display()
{
	cout<<"\nAccount No. -->"<<acc_no;
	cout<<"\nAccount Name -->"<<name;
	cout<<"\nAccount Balance-->"<<bal;
}
void main()
{
	char choice;
	account a;
	clrscr();
	do
	{
		cout<<"\nPress\nA.Diposite\nB.Withdraw\nC.Display\n0.Exit\n";
		cout<<"Enter Your Choice \n-->";
		cin>>choice;
		switch(choice)
		{
			case 'a':a.deposite();getch();break;
			case 'b':a.withdraw();getch();break;
			case 'c':a.display();getch();break;
			case '0':exit(0);break;
			default:cout<<"\nEnter Right choice ";getch();break;
		}clrscr();
	}while(1);
}