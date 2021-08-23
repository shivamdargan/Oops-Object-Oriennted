#include<iostream>
using namespace std;

struct cricketers
{
	int avrun;
	string  name;
	int age;
	int notm;
}c1[5],t;

int main()
{
	int n=5;
	for (int i = 0; i < 5; i++)
	{
		cout<<" Enter Name :"<<endl;
		cin>>c1[i].name;
		cout<<" Enter Age :"<<endl;
		cin>>c1[i].age;
		cout<<" Enter Total Test Matches played  :"<<endl;
		cin>>c1[i].notm;
		cout<<" Enter Average Run :"<<endl;
		cin>>c1[i].avrun;
	}
	for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(c1[j].avrun>c1[j+1].avrun)
            {
                t=c1[j];
                c1[j]=c1[j+1];
                c1[j+1]=t;
            }
        }
    }
	for (int i = 4; i >= 0; i--)
	{
		cout<<"############### Cricketer "<<i+1<<"###################"<<endl;
		cout<<"Name : "<< c1[i].name<<endl;
		cout<<"\nAge : "<< c1[i].age<<endl;
		cout<<"\nTotal Test Matches played : "<< c1[i].notm<<endl;
		cout<<"\nAverage Run : "<< c1[i].avrun<<endl;
	}
	return 0;
}

