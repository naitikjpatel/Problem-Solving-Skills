#include<iostream>
using namespace std;
int addNnumber(int n){
    int sum=0;
    for (int i = 1; i <=n; i++)
    {
        sum+=i;
    }
    return sum;
    
}
int main(){
    int n;
    cout<<"\nEnter the value of n"<<endl;
    cin>>n;

    int ans=addNnumber(n);
    cout<<"\nThe answer is "<<ans<<endl;
    return 0;
}