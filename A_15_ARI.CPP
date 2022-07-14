/*
Program No. 15
*/
#include<iostream.h>
#include<conio.h>

class Arithmetic
{
	float a,b;
	public:
		Arithmetic()
		{
			cout<<"\nEnter Value of A and B \n-->";
			cin>>a>>b;
		}
		inline void sum();
		inline void sub();
		inline void multi();
		inline void divi();
};
inline void Arithmetic::sum()
{
	cout<<"\nSum of A and B ->"<<a+b;
}
inline void Arithmetic::sub()
{
	cout<<"\nSubtrection of A and B ->"<<a-b;
}
inline void Arithmetic::multi()
{
	cout<<"\nMultiplaction of A and B ->"<<a*b;
}
inline void Arithmetic::divi()
{
	cout<<"\nDivition of A and b ->"<<a/b;
}
void main()
{
	clrscr();
	Arithmetic A;
	A.sum();
	A.sub();
	A.divi();
	A.multi();
	getch();
}