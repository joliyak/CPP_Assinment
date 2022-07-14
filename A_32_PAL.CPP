/*
Program No. 32
*/

#include<iostream.h>
#include<conio.h>

class palindrome
{
	long int no,rev;
	long int temp,jk;
	public:
		palindrome()
		{
			cout<<"\n\tCheck Number is Palindrome or not ";
			cout<<"\nEnter Number ->";
			cin>>no;
			temp=no;
			rev=0;
			while(temp!=0)
			{
				jk=temp%10;
				rev=(rev*10)+jk;
				temp=temp/10;
			}
			if(rev==no)
			{
				cout<<endl<<no<<" Is Palindrome  ";
			}
			else
			{
				cout<<endl<<no<<" Is Not Palindrome ";
			}
		}
};
void main()
{
	clrscr();
	palindrome p;
	getch();
}