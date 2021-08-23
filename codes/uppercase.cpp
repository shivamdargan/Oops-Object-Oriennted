#include <iostream>
#include<string>

using namespace std;

int main() {
	string str;
    cout<<"Enter the string ";
    getline(cin,str);
		
	for(int j=0;j<str.length();j++)
		str[j]=tolower(str[j]);
	cout<<"The string in lower case: "<<str<<"\n";
}
