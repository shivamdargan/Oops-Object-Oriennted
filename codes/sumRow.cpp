
#include <iostream>  
using namespace std;  
#define m 3
#define n 3
void row_sum(int arr[m][n])
{
 
    int i,j,sum = 0;
 
    cout << "\nFinding Sum of each row:\n\n";
 
    // finding the row sum
    for (i = 0; i < m; ++i) {
        for (j = 0; j < n; ++j) {
 
            // Add the element
            sum = sum + arr[i][j];
        }
 
        // Print the row sum
        cout
            << "Sum of the row "
            << i << " = " << sum
            << endl;
 
        // Reset the sum
        sum = 0;
    }
}
int main()
{
 
    int i,j;
    int arr[m][n];
 
 cout<<"Enter 2D Array"
    for(int row=0;row<m;row++)
    {
    	for(int col=0;col<n;col++)
    	{
    		cin>>arr[row][col];
		}
	}
 
    // Get each row sum
    row_sum(arr);

    return 0;
}

