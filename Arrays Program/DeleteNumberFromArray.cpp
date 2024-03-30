#include<iostream>
using namespace std;
int main(){
    int arr[6];
    int n=6;
    cout<<"\nEnter the array element"<<endl;
    for (int i = 0; i < 6; i++)
    {
        cin>>arr[i];
    }

    int pos=0;
    int num;
    cout<<"\nEnter the number you want to delete "<<endl;
    cin>>num;
    for (int i = 0; i < 6; i++)
    {
        if(arr[i]==num){
            pos=i;n--;
            break;
        }
    }

    for (int i = pos; i < 5; i++)
    {
        arr[i]=arr[i+1];
    }


    for (int i = 0; i < n; i++)
    {
      cout<<arr[i]<<"\t";
    }
    
    

    return 0;
}