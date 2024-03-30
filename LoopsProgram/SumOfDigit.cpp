#include<iostream>
using namespace std;
int main(){
    int no;
    cin>>no;
    int sum=0;
    while(no!=0){
        sum +=no%10;
        no/=10;
    }

    cout<<"\nThe sum is "<<sum<<endl;
    return 0;
}