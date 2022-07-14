#include<iostream.h>
#include<conio.h>

class Area
{
	public:
		area(int x)
		{
			cout<<"\nArea of Square -->"<<4*x;
		}
		area(float pi,float r)
		{
			cout<<"\nArea of Circle -->"<<pi*r*r;
		}
		area(float x,float b,float h)
		{
			cout<<"\nArea of Triangle ->"<<x*b*h;
		}
};
void main()
{
	clrscr();
	Area a;
	a.area(5);
	a.area(3.14,6.0);
	a.area(0.5,5.0,6.0);
	getch();
}