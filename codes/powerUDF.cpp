#include<iostream>
#include<math.h>
using namespace std;
int powerNum(int n1,int n2)
{
return(pow(n1,n2));
}
int main()
{
	int num1,num2,res;
	printf("Enter first number: ");
	cin>>num1;
	printf("Enter second number: ");
	cin>>num2;
	res=powerNum(num1,num2);
	cout<<"\n"<<num1<<" Raised To The Power "<<num2<<" is= "<<res;
	return 0;
}

