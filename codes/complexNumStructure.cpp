#include<iostream>
using namespace std;

struct complex
{
	int real;
	int img;
}c1[2],add,subtract;

int main()
{
	
		cout<<"############### First Complex Number ######################"<<endl;
		cout<<" Enter a As In a+ib :"<<endl;
		cin>>c1[0].real;
		cout<<" Enter b As In a+ib :"<<endl;
		cin>>c1[0].img;
		cout<<"############### Second Complex Number ######################"<<endl;
		cout<<" Enter c As In c+id :"<<endl;
		cin>>c1[1].real;
		cout<<" Enter d As In c+id :"<<endl;
		cin>>c1[1].img;
		
		cout<<"############### Complex Numbers Are: #####################"<<endl;
		cout<< c1[0].real<<"+"<<c1[0].img<<"i"<<endl;
		cout<< c1[1].real<<"+"<<c1[1].img<<"i"<<endl;
		add.real=c1[0].real+ c1[1].real;
		add.img=c1[0].img + c1[1].img;
		subtract.real=c1[0].real - c1[1].real;
		subtract.img=c1[0].img - c1[1].img;
		
	
		cout<<"############### Addition Of Complex Numbers ######################"<<endl;
		cout<< add.real<<"+"<<add.img<<"i"<<endl;
		cout<<"############### Subtraction Of Complex Numbers ######################"<<endl;
		cout<< subtract.real<<"+("<<subtract.img<<")i"<<endl;
		
		
		
	return 0;
}

