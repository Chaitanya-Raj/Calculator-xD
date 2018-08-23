#include<iostream>
#include<conio.h>
#include<process.h>

using namespace std;

double x,y;

void basic_input()
{
	cout<<"\nEnter the first number : ";
	cin>>x;
	cout<<"\nEnter the second number : ";
	cin>>y;
}

void addition()
{
	basic_input();
	float sum;
	sum=x+y;
	cout<<"\nSum = "<<sum;
}

void subtraction()
{
	basic_input();
	float dif;
	dif=x-y;
	cout<<"\nDifference = "<<dif;
}

void multiplication()
{
	basic_input();
	float prod;
	prod=x*y;
	cout<<"\nProduct = "<<prod;
}

void division()
{
	basic_input();
	if(y==0)
	{
		cout<<"\nDivision by zero is not defined";
	}
	else
	{
		float quo;
		quo=x/y;
		cout<<"\nResult = "<<quo;
	}
}

void modulusx()
{
	basic_input();
	int a,b,rem;
	a=int(x);
	b=int(y);
	rem=a%b;
	cout<<"\nRemainder = "<<rem;
}

int main()
{
	char flag;
	int ch;
	do
	{
		cout<<"\n\n\n";
		for(int i=0;i<80;i++)
		{
			cout<<"_";
		}
		cout<<"\n\n\nChoose an Operation\n";
		cout<<"\n1.Addition(+)";
		cout<<"\n2.Subtraction(-)";
		cout<<"\n3.Multiplication(*)";
		cout<<"\n4.Division(/)";
		cout<<"\n5.Modulus(%)";
		cout<<"\n0.Exit\n\n\n";
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
			case 5:modulusx();
						break;
			case 0:exit(0);
			default:cout<<"\nEnter a Valid Choice !!!";
		}
		cout<<"\n\nDo you want to perform another operation? ";
		cin>>flag;
	}while(flag=='y'||flag=='Y');
	return 0;
}
	
