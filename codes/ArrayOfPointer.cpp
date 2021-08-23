#include <iostream>
using namespace std;

int main()
{
   int data[5],sum=0;
   cout << "Enter elements: ";

   for(int i = 0; i < 5; ++i)
   {
      cin >> data[i];
   }
   cout<<"Base Address Of Array Is"<<&(data)<<endl;
   for(int i = 0; i < 5; ++i)
   {
   		cout<<"Address Of Element  "<<*(data+i)<<" Is "<<&(data)+i<<endl;
   		sum=sum+ *(data + i);
   }
   cout << "Sum Of All Elements Is: "; 
   cout<<sum<<endl;
   return 0;
}
