// 1 + 1/2 +1/3 + 1/4 + ..... + 1/N

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"\nEnter the value of n"<<endl;
    cin>>n;
    int cnt=1;
    float sum=0;
    while (cnt<=n)
    {
        sum =sum +(1.0/cnt);
        cnt++;
    }

    cout<<"\nThe Sum is "<<sum<<endl;
    
    return 0;
}