#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"\nEnter the array element"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    int n=5;

    for (int i = 0; i <n-1; i++)
    {
        for(int j=i+1 ;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    
    cout<<"\nIn Ascending Order"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<"\t";
    }


    cout<<"\nIn Descending Order"<<endl;
    for (int i = 4; i>=0; i--)
    {
        cout<<arr[i]<<"\t";
    }
    return 0;
}