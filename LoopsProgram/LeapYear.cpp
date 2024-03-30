#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"\nEnter the Year Value to check the year is leap year or not"<<endl;
    cin>>year;

    
    if(year%4==0){
        cout<<"\nyear is leap year"<<endl;
    }
    else{
        cout<<"\nYear is not leap year"<<endl;

    }
    return 0;
}