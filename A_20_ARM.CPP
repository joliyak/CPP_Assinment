/*
Program No.20
*/
#include<iostream.h>
#include<conio.h>
#include<math.h>

class Armstrong
{
	int no,temp,n;
	public:
		Armstrong()
		{
			cout<<"\n\t\tCheck No. is Armstrong or Not ";
			cout<<"\nEnter Number ->";
			cin>>no;
			temp=no;
			n=0;
			while(temp!=0)
			{
				temp=temp/10;//153/10 ->15
				n++;
			}
			temp=no;
			int r=0;
			int ans=0;
			while(temp!=0)
			{
				r=temp%10;   //153%10 =3
				ans=ans+pow(r,n);    //ans= 0+pow(3,3) ->27
				temp=temp/10;    //153/10 ->15
			}
			if(no==ans)
				cout<<endl<<no<<" is Armstrong Number ";
			else
				cout<<endl<<no<<" is Not Armstrong Number";
		}
};
void main()
{
	clrscr();
	Armstrong a;
	getch();
}