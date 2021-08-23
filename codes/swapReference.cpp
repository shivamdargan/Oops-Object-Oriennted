#include<iostream>
using namespace std;
void swapReference(int & x,int & y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	cout<<"Values Inside Function After Swapping: "<<endl<<"A="<<x<<" B="<<y<<endl;
}
void swapWithoutReference(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	cout<<"Values Inside Function After Swapping: "<<endl<<"C="<<x<<" D="<<y<<endl;
}
int main()
{
	int a,b,c,d;
	cout<<"Enter two values:"<<endl;
	cin>>a>>b;
	
	cout<<"Before swapping"<<endl<<"A="<<a<<"  B="<<b<<endl;
	swapReference(a,b);
	cout<<"Values Inside Main Function"<<endl;
	cout<<"After swapping: A="<<a<<"  B="<<b<<endl<<endl;
	cout<<"Enter Two Values For Non Reference Function"<<endl;
	cin>>c>>d;
	swapWithoutReference(c,d);
	cout<<"Values Inside Main Function"<<endl;
	cout<<"After swapping: C="<<c<<"  D="<<d<<endl;
}
