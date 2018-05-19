#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	float a,b,c,x1,x2,d;
	cout<<"ax^2 + bx + c \n"<<"Enter value of a b and c"<<endl;
	cout<<"Enter value of a"<<endl;
	cin>>a;
	cout<<"Enter value of b"<<endl;
	cin>>b;
	cout<<"Enter value of c"<<endl;
	cin>>c;
	d=sqrt(pow(b,2)-4*a*c);
	if((pow(b,2)-4*a*c)==0)
	{
		d=0;
	}
	x1= (-1*b+d)/(2*a);
	x2= (-1*b-d)/(2*a);
	cout<<"x1= "<<x1<<endl;
	cout<<"x2= "<<x2<<endl;	
	return 0;
}
