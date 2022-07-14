#include<iostream.h>
#include<conio.h>

class Multi
{
	public:
	       void multi(int x,int y)
		{
			cout<<"\n Two Number multip ->"<<x*y;
		}
		void multi(int x,int y,int z)
		{
			cout<<"\n Three Number multip ->"<<x*y*z;
		}
		void multi(int x,int y,int z,int a)
		{
			cout<<"\n Four Number multip ->"<<x*y*z*a;
		}
};
void main()
{
	clrscr();
	Multi m;
	m.multi(2,4);
	m.multi(5,4,2);
	m.multi(5,6,2,3);
	getch();
}
