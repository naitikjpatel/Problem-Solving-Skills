#include<iostream>
using namespace std;
int power(int a,int b){
    int ans=1;
    for (int  i = 1; i <=b; i++)
    {
        ans*=a;
    }
    return ans;
    
}
int main(){
    // a^b
    int a,b;
    cout<<"Enter the value of the base "<<endl;
    cin>>a;
    cout<<"\nEnter the value of power "<<endl;
    cin>>b;

    int ans=power(a,b);
    cout<<"\nThe answer is "<<ans;
    return 0;
}