#include<iostream>
using namespace std;
int main(){
    int n;
cout<<"\nEnter the number For the Factorial"<<endl;
cin>>n;
int fact=1;
for(int i=1;i<=n;i++){
    fact*=i;
}
cout<<"\nFactorial is "<<fact;
    return 0;
}