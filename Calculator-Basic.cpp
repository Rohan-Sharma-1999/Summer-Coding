#include<iostream>
using namespace std;
class calC
{
	public:
		
	int add()
	{
		int n,i=1,p,sum=0;
		cout<<" Enter number of terms"<<endl;
		cin>>n;
		while(i<=n)
		{
			cout<<"Enter the number"<<endl;
			cin>>p;
			sum=sum+p;
			i++;
		}
		cout<<sum<<endl;
	}
	int sub()
	{
		signed int a,b,c;
		cout<<" Enter signed integer"<<endl;
		cin>>a;
		cout<<" Enter signed integer"<<endl;
		cin>>b;
		c=a+b;
		cout<<c<<endl;
	}
	int multiply()
	{
		int n,i=1,product=1;
		signed int p;
		cout<<" Enter number of terms"<<endl;
		cin>>n;
		while(i<=n)
		{
			cout<<"Enter the number"<<endl;
			cin>>p;
			product=product*p;
			i++;
	    }
	    cout<<product<<endl;
	}
};

int main()
{
	int n;
	calC o;
	cout<<"```````````````````MAIN MENU``````````````````````"<<endl;
	cout<<"                   1.Addition                     "<<endl;
	cout<<"                   2.Subtraction                  "<<endl;
	cout<<"                   3.Multiplication               "<<endl;
	cout<<"Enter the Preffered number for corrosponding operation or -1 to quit"<<endl;
	cin>>n;
	if(n==-1)
	{
		cout<<"Program Quit"<<endl;
	}
	while(n!=-1)
	{
		if(n==1)
		{
			o.add();
			cout<<"Enter the Preffered number for corrosponding operation or -1 to quit"<<endl;
			cin>>n;
		}
		if(n==2)
		{
			o.sub();
			cout<<"Enter the Preffered number for corrosponding operation or -1 to quit"<<endl;
			cin>>n;
		}
		if(n==3)
		{
			o.multiply();
			cout<<"Enter the Preffered number for corrosponding operation or -1 to quit"<<endl;
			cin>>n;
		}
	}
	return 0;
}

