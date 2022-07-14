/*
Program No.12
*/
#include<iostream.h>
#include<conio.h>

class two;
class one
{
	int x;
	public:
		void get()
		{
			cout<<"\nEnter Value of X ->";
			cin>>x;
		}
		friend void max(one,two);
};
class two
{
	int y;
	public:
		void get()
		{
			cout<<"\nEnter Value of Y ->";
			cin>>y;
		}
		friend void max(one,two);
};
void max(one a,two b)
{
	if(a.x>b.y)
	{
		cout<<"\n X is Max ";
	}
	else
	{
		cout<<"\nY is Max ";
	}
}
void main()
{
	clrscr();
	one x;
	x.get();
	two y;
	y.get();
	max(x,y);
	getch();
}