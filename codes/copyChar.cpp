#include <iostream>
#include <string>
using namespace std;
int main()
{
    char s1[100], s2[100],i;          
    cout<<"Enter string s1:\n"<<endl;     
    cin.get(s1,100);        
    for(i = 0; s1[i] != '\0'; ++i)   
    {
        s2[i] = s1[i];
    }
    s2[i] = '\0';                  
    cout<<"String s2: "<<s2;
    return 0;
}

