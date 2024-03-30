#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"\nENter the element"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }

    int sum=0;
    for (int i = 0; i <5; i++)
    {
        sum+=arr[i];
    }

    cout<<"\nThe Array Sum is "<<sum<<endl;
    
    return 0;
}