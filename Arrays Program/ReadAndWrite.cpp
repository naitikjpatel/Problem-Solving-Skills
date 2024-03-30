#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"\nEnter the Array Element"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }

    cout<<"\nArray Element is "<<endl;
    for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
    {
        cout<<arr[i]<<"\t";
    }
    
    return 0;
}