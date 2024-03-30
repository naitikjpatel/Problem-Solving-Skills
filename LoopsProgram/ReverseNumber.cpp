#include<iostream>
#include<math.h>
using namespace std;
int main(){ 
    int no;
    cout<<"\nEnter the number for the reveser"<<endl;
    cin>>no;

    int temp=0;
    int i=0;
    while (no!=0)
    {
        int digit=no%10;
        temp =temp * 10+digit;
        i++;
        no=no/10;
    }

    cout<<"\nReverse Number is "<<temp;
    

    return 0;
}