#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"\nEnter the array element"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    
    int maxE=0;
    for (int i = 0; i < 5; i++)
    {
        maxE=max(arr[i],maxE);
    }

    cout<<"\nMax Element is "<<maxE;
       
    return 0;
}