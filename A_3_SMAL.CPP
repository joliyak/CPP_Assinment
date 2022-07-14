#include<iostream.h>
#include<conio.h>

class small
{
	int a,b,c;
	public:
		inline void get();
		inline void put();
};
inline void small::get()
{
	cout<<"\nEnter value of A,B,C"<<endl;
	cin>>a>>b>>c;
}
inline void small::put()
{
	if(a<b&&a<c)
	{
		cout<<"A is Small";
	}
	else if(b<c&b<a)
		cout<<"B is Small";
	else
		cout<<"C is Small";
}
void main()
{
	clrscr();
	small s;
	s.get();
	s.put();
	getch();
}