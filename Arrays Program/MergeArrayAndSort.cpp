#include <iostream>
using namespace std;
int main()
{
    int arr1[5], arr2[5], ans[10];
    int n = 5, m = 10;
    cout << "\nEnter the Array Element respectively of arr1 and arr2" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "\nThis is for the arr1  : ";
        cin >> arr1[i];
        cout << "\nThis is for the arr2  : ";
        cin >> arr2[i];
    }

    // now we write the logic of the merge
    // This is for the first array
    for (int i = 0; i < n; i++)
    {
        ans[i] = arr1[i];
    }
    // This is for the second array
    for (int i = n,j=0; i < m && j<n; i++,j++)
    {
        ans[i] = arr2[j];
    }


    cout<<"\nMerge Array is "<<endl;
    for (int i = 0; i <m; i++)
    {
        cout<<ans[i]<<"\t";
    }
    
    return 0;
}