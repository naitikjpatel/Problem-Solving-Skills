#include<iostream>
using namespace std;
int addition(int num1 ,int num2){
    return num1+num2;
}
int main(){
    int num1,num2;
    cout<<"\nEnter the first Number"<<endl;
    cin>>num1;
    cout<<"\nEnter the second number"<<endl;
    cin>>num2;

    int ans=addition(num1,num2);
    cout<<"\nThe ans is "<<ans<<endl;
    return 0;
}