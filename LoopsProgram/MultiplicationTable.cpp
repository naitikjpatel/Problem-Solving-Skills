#include<iostream>
using namespace std;
int main(){
    int no;
    cout<<"\nEnter the number"<<endl;
    cin>>no;

    for(int i=1;i<=10;i++){
        cout<<no<<" X "<<i<<" = "<<no*i<<endl;
    }
    
    return 0;
}