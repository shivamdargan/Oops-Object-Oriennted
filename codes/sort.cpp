#include <iostream>  
using namespace std;  
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
}

void sortArray(int arr[], int n) 
{ 
    int i, j; 
    for (i = 0; i < n-1; i++)     
      
    for (j = 0; j < n-i-1; j++) 
        if (arr[j] > arr[j+1]) 
            swap(&arr[j], &arr[j+1]); 

	cout<<"Sorted Array Is:"<<endl;
    for(int i=0;i<5;i++)
    {
    	cout<<arr[i]<<"\t"<<endl;
	}
} 
int main()
{
	int num[5];
	cout<<"Enter Elements Of Array"<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>num[i];
	}
	sortArray(num,5);
	return 0;
}

