#include <iostream>  
using namespace std;  
int main()  
{  
   int i,fact=1,number;    
  cout<<"Enter any Number: ";    
 cin>>number;    
  for(i=1;i<=number;i++){    
      fact=fact*i;    
  }    
  cout<<"Factorial of " <<number<<" USing For Loop is: "<<fact<<endl;  
  fact=1;
  i=1;
  while(i<=number)
  {
  	fact=fact*i; 
  	i++;
  }
  cout<<"Factorial of " <<number<<" Using While Loop is: "<<fact<<endl;
  return 0;  
}  
