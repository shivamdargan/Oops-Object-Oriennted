#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter Age"<<endl;;
	cin>>age;
	if(age%2==0)
	{
		cout<<"Eligible For Voting"<<endl;
	}
	else
	{
		cout<<"Not Eligible For Voting"<<endl;
	}
	return 0;
}

