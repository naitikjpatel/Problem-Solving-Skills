//Questiuon To check : number is palindrom or not

#include<iostream>
using namespace std;
int main(){
    int no;
    cout<<"\nEnter the number"<<endl;
    cin>>no;
    int temp=no;

    int ans=0;
    while (no!=0)
    {
        int digit=no%10;
        ans=ans*10 + digit;
        no/=10;
    }

    if(ans==temp)
    {
        cout<<"\nNumber is Palindrom"<<endl;

    }
    else{
        cout<<"\nNumber is Not Palindrom"<<endl;
    }
    
    return 0;
}