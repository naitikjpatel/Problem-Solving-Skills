#include<iostream>
using namespace std;
/*
Question:check number is +ve or -ve or 0
*/

int main(){
    int num1,num2;
    cout<<"\nEnter the value of num1 :";
    cin>>num1;
   
   if(num1>0){
    cout<<"\n"<<num1<<" is positive number";
   }
   else if(num1==0){
    cout<<"\n"<<num1<<" is zero number";
   }
   else{
    cout<<"\n"<<num2<<" is negative number";
   }
    return 0;
}