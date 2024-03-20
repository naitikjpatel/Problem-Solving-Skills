#include<iostream>
using namespace std;
/*
Question:Find max number among three number
*/

int main(){
    int num1,num2,num3;
    cout<<"\nEnter the value of num1 :";
    cin>>num1;
    cout<<"\nEnter the value of num2 :";
    cin>>num2;
    cout<<"\nEnter the value of num3 :";
    cin>>num3;
   if(num1>=num2 && num1>=num3){
    cout<<"\n"<<num1<<" is max number";
   }
   else if(num2>=num1 && num2>=num3){
    cout<<"\n"<<num2<<" is max number";
   }
   else{
    cout<<"\n"<<num3<<" is max number";
   }
    return 0;
}