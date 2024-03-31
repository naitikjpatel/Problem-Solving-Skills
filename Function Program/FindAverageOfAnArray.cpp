#include<iostream>
using namespace std;
float average(int *arr,int n){
    float avg=0;
    float sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    avg=sum/n;
    return avg;
    
}
int main(){
    int arr[10];
    int n;
    cout<<"\nHow many element you want to insert "<<endl;
    cin>>n;
    cout<<"\nEnter the array element"<<endl;
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    float avg=average(arr,n);
    cout<<"\nArray average is "<<avg<<endl;
    return 0;
}