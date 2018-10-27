#include<iostream>
//#include<stdlib.h>
//#include<fstream>
//#include<string>
#include<math.h>
#include<ctime>
//#include<process.h>
//#include<vector>

using namespace std;

double x,y,res;
char clr;
int fl=0;

void clear()
{
	cout<<"\n\nDo you want to reset?";
	cin>>clr;
	if(clr=='y'||clr=='Y')
	{
		fl=1;
		res=0;
	}
	else
	{
		fl=0;
	}
}

void basic_input()
{
	if(fl==0)
	{
		x=res;
	}
	else
	{
		cout<<"\nEnter the first number : ";
		cin>>x;
	}
	cout<<"\nEnter the second number : ";
	cin>>y;
}

void addition()
{
	basic_input();
	res=x+y;
	cout<<"\nSum = "<<res;
}

void subtraction()
{
	basic_input();
	res=x-y;
	cout<<"\nDifference = "<<res;
}

void multiplication()
{
	basic_input();
	res=x*y;
	cout<<"\nProduct = "<<res;
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
		res=x/y;
		cout<<"\nResult = "<<res;
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

void power()
{
	cout<<"\nEnter the number : ";
	cin>>x;
	cout<<"\nEnter the exponent : ";
	cin>>y;
	res=pow(x,y);
	cout<<"\nResult = "<<res;
}

void sqroot()
{
	cout<<"\nEnter the number : ";
	cin>>x;
	res=sqrt(x);
	cout<<"Square Root = "<<res;
}

void percentage()
{
	cout<<"Enter the total amount : ";
	cin>>y;
	cout<<"Enter the current value : ";
	cin>>x;
	res=(x/y)*100;
	cout<<"Percentage = "<<res<<"%";
}

void calc_menu()
{
	char flag;
	int ch;
	do
	{
		cout<<"\n";
		for(int i=0;i<80;i++)
		{
			cout<<"_";
		}
		cout<<"\n\nChoose an Operation\n";
		cout<<"\n1.Addition(+)";
		cout<<"\n2.Subtraction(-)";
		cout<<"\n3.Multiplication(*)";
		cout<<"\n4.Division(/)";
		cout<<"\n5.Modulus(%)";
		cout<<"\n6.Power(^)";
		cout<<"\n7.Square Root(v)";
		cout<<"\n8.Percentage(%)";
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
			case 6:power();
						break;
			case 7:sqroot();
						break;
			case 8:percentage();
						break;
			case 0:goto fx;
			default:cout<<"\nEnter a Valid Choice !!!";
		}
		cout<<"\n\nDo you want to perform another operation? ";
		cin>>flag;
		fx:
		if(flag!='y'||flag!='Y')
		{
			cout<<"\nExiting...";
		}
	}while(flag=='y'||flag=='Y');
}

void date_time()
{
    time_t tt;

    struct tm * ti;

    time (&tt);

    ti = localtime(&tt);

    cout << "\n\n--->Current Day, Date and Time is = "<< asctime(ti);
}
/*
void quote()
{
	char retry = ' ';
    ifstream quoteFile;
	quoteFile.open("quotes.txt",ios::binary);
	do
    {
    	srand(time(0));
        string arr[100];
        if (quoteFile.is_open())
        {
        	cout<<"\n\n";
            while (!quoteFile.eof())
            {
            	quoteFile.seekg(rand());
            	char ch;
            	int i=0;
				while(i<1)
                {
            		quoteFile.read(&ch,sizeof(ch));
					arr[i]=ch;
					i++;
				}
				int j=0;
				while(j<1)
                {
                    cout<<arr[j];
                    j++;
				}
            }
            quoteFile.close();
        }
        else
        {
            cout << "Error. Unable to open file." << endl;
            cout << "Try again? [Y]es / [N]o" << endl;
        }
    } while (retry == 'Y' || retry == 'y');
}

void quote()
{
    char retry = ' ';
    int lineCount = 0;
    int randomQuote_int = 0;
    string line = "";
    vector<std::string>randomQuote_vect;

    ifstream quoteFile ("quotes.txt");

    do
    {
        srand(time(0));
        if (quoteFile.is_open())
        {
        	cout<<"\n\n";
            while (!quoteFile.eof())
            {
                getline(quoteFile, line);
                if (line != " ")
                {
                    randomQuote_vect.push_back(line);
                    lineCount++;
                }
            }
            randomQuote_int = rand() % lineCount;
            cout << randomQuote_vect[randomQuote_int] << endl;
            quoteFile.close();
        }
        else
        {
            cout << "Error. Unable to open file." << endl;
            cout << "Try again? [Y]es / [N]o" << endl;
        }
    } while (retry == 'Y' || retry == 'y');
}
*/

int main()
{
//	cout << "If you haven't got anything clever to say at the moment, use these!" << std::endl;
//	cout << "Just repeat the sentence and anyone will instantly agree with you!" << std::endl;

//	quote();
	
	date_time();
	
	int choice;
	char flae;
	do
	{
		cout<<"\n";
		for(int i=0;i<80;i++)
		{
			cout<<"*";
		}
		cout<<"\n\nChoose an Activity\n\n";
		cout<<"1.Calculator";
		cout<<"\n0.Exit\n\n";
		cin>>choice;
		switch(choice)
		{
			case 1:calc_menu();
					break;
			case 0:exit(0);
			default:cout<<"\nChoose a valid option!!!";
		}
		cout<<"\n\nDo you want to do any other activity? ";
		cin>>choice;
	}while(flae=='y'||flae=='Y');
	return 0;
}
