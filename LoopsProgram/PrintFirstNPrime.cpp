#include<iostream>
using namespace std;
bool isPrime(int n){
    if(n==2){
        return  true;
    }
    bool flag=true;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            return false;

        }
    }
    return flag;
}
int main(){
    int n;
    cout<<"\nEnter the Value of n"<<endl;
    cin>>n;
    int cnt=0;
    int no=2;
    for(int i=0;cnt!=n;i++){

        if(isPrime(no)){
            cnt++;
            cout<<no<<"\t";
        }
        no++;
    }
}