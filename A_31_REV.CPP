/*
	Program No.31
*/
#include<iostream.h>
#include<conio.h>

class Reverse
{
	long int no;
	long jk,rev,temp;
	public:
		Reverse()
		{
			cout<<"\nEnter Number \n-->";
			cin>>no;
			temp=no;
			rev=0;
			while(temp!=0)
			{
				jk=temp%10;
				rev=(rev*10)+jk;
				temp=temp/10;
			}
			cout<<"\nOrginal No is "<<no<<endl;
			cout<<"Reverse No is "<<rev;
		}
};
void main()
{
	clrscr();
	Reverse r;
	getch();
}