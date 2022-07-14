#include<iostream.h>
#include<conio.h>
#define n 2

class product
{
	int pro_code;
	char pro_name[20];
	float pro_price;
	int date,month,year;
	public:
		inline void get();
		inline void put();
};
inline void product::get()
{
	cout<<"\nEnter Product Code -->";
	cin>>pro_code;
	cout<<"\nEnter Product Name -->";
	cin>>pro_name;
	cout<<"\nEnter Product Price -->";
	cin>>pro_price;
	cout<<"\nEnter Product Sold Date,Month,Year -->\n";
	cin>>date>>month>>year;
}
inline void product::put()
{
	cout<<"\n"<<pro_code<<"\t"<<pro_name<<"\t"<<pro_price<<"\t"<<date<<"\ "<<month<<"\ "<<year;
}
void main()
{
	clrscr();
	product p[10];
	for(int i=0;i<n;i++)
		p[i].get();
	for(i=0;i<n;i++)
		p[i].put();
	getch();
}