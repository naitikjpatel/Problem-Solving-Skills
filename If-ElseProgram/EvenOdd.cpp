#include<iostream>
using namespace std;
/*
Question: Even Or Odd
*/
int main(){
    int num1;
    cout<<"\nEnter the value of num1 :";
    cin>>num1;

   if(num1%2==0){
    cout<<"\n"<<num1<<" is Even number";
   }
   else{
    cout<<"\n"<<num1<<" is Odd number";

   }
    return 0;
}