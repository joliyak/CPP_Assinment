/*
Program N.10
3X3 matrix Row and Column Totle.
*/

#include<iostream.h>
#include<conio.h>
#define no 3

class matrix
{
	int jk[3][3];
	int i,j;
	int x,y;
	public:
		void get();
		void put();
};
void matrix::get()
{
	cout<<"\nEnter 3X3 Matrix -->\n";
	for(i=0;i<no;i++)
	{
		for(j=0;j<no;j++)
		{
		    cin>>jk[i][j];
		}
	}
}
void matrix::put()
{
	endl;
	for(i=0;i<no;i++)
	{
		x=0;
		for(j=0;j<no;j++)
		{
			x=x+jk[i][j];
		}
		cout<<"\n"<<i;
		cout<<" Row totle ->"<<x;
	}
	cout<<endl;
	for(i=0;i<no;i++)
	{
		y=0;
		for(j=0;j<no;j++)
		{
			y=y+jk[j][i];
		}
		cout<<"\n"<<i;
		cout<<" Col Totle ->"<<y;
	}
}
void main()
{
	matrix m;
	clrscr();
	m.get();
	m.put();
	getch();
}