#include<iostream>
using namespace std;
int mul(int n1,int n2)
{
return(n1*n2);
}
int main()
{
	int num1,num2,prod;
	printf("Enter first number: ");
	cin>>num1;
	printf("Enter second number: ");
	cin>>num2;
	prod=mul(num1,num2);
	cout<<"\n\nProduct of "<<num1<<" and "<<num2<<" is= "<<prod;
	return 0;
}

