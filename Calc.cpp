#include<iostream>
#include<conio.h>

using namespace std;

double x,y;

void addition()
{
	float sum;
	sum=x+y;
	cout<<"Sum = "<<sum;
}

void subtraction()
{
	float dif;
	dif=x-y;
	cout<<"Difference = "<<dif;
}

void multiplication()
{
	float prod;
	prod=x*y;
	cout<<"Product = "<<prod;
}

void division()
{
	float quo;
	quo=x/y;
	cout<<"Quotient = "<<quo;
}

void modulus()
{
	int a,b,rem;
	a=int(x);
	b=int(y);
	rem=a%b;
	cout<<"Remainder = "<<rem;
}

int main()
{
	char ch;
	cout<<"\nEnter the first number :";
	cin>>x;
	cout<<"\nEnter the second number :";
	cin>>y;
	cout<<"\nChoose an Operation";
	cout<<"\n1.Addition(+)";
	cout<<"\n2.Subtraction(-)";
	cout<<"\n3.Multiplication(*)";
	cout<<"\n4.Division(/)";
	cout<<"\n5.Modulus(%)\n\n";
	cin>>ch;
	switch(ch)
	{
		case 1:addition();
					break;
		case 2:subtraction();
					break;
		case 3:multiplication();
					break;
		case 4:division();
					break;
		case 5:modulus();
					break;
		default:cout<<"Enter a Valid Choice !!!";
	}
	getch();
	return 0;
}
