#include<iostream>
using namespace std;
int main(){
    int no;
    cout<<"\nEnter the numer"<<endl;
    cin>>no;

    bool flag=true;
    for(int i=2;i<=no/2 ;i++){
            if(no%i==0){
                flag=false;
                break;
            }
    }

    if(flag){
        cout<<no<<" is prime number";
    }
    else{
        cout<<no<<" is not prime number";
    }
    return 0;

}