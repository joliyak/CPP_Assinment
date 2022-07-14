/*
Program No. 30
*/
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<process.h>

class Item
{
	int i_id;
	char i_name[20];
	float i_stock;
	public:
		Item()
		{
			i_id=11;
			strcpy(i_name,"JK");
			i_stock=1000;
		}
		void purchase();
		void sales();
		void stock();
};
void Item::purchase()
{
	float value;
	cout<<"\nEnter Value ->";
	cin>>value;
	i_stock=i_stock+value;
}
void Item::sales()
{
	float value;
	cout<<"\nEnter Value ->";
	cin>>value;
	if(value<=i_stock)
	{
		i_stock=i_stock-value;
	}
	else
		cout<<"\nInvelade Stock ";
}
void Item::stock()
{
	cout<<"\n Id ->"<<i_id;
	cout<<"\nName ->"<<i_name;
	cout<<"\nStock ->"<<i_stock;
}
void main()
{
	clrscr();
	Item I;
	int choice;
	do
	{
		cout<<"\n\t\tItem Store \n\n";
		cout<<"Press\n1->Purchase\n2->Sales\n3->Stock\n0->Exit\n-->";
		cin>>choice;
		switch(choice)
		{
			case 1:I.purchase();getch();break;
			case 2:I.sales();getch();break;
			case 3:I.stock();getch();break;
			case 0:exit(0);break;
			default:cout<<"\nEnter Right Choice ";getch();break;
		}
		clrscr();
	}while(1);
}





