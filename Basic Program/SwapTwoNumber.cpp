#include<iostream>
using namespace std;
/*
Question: Swap two number using thrid varible
*/

int main(){
    int num1,num2;
    cout<<"\nEnter the value of num1 :";
    cin>>num1;
    cout<<"\nEnter the value of num1 :";
    cin>>num2;
    cout<<"\nBefore swaping value of num1= "<<num1<<" and num2= "<<num2<<endl;

    int temp=num1;
    num1=num2;
    num2=temp;
    cout<<"\nAfter swaping value of num1= "<<num1<<" and num2= "<<num2<<endl;
    
    return 0;
}