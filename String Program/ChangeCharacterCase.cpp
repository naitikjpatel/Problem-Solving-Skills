#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter Character "<<endl;
    cin>>ch;

    if('a'<=ch && 'z'>=ch){
        ch-=32;
        
    }else{
        ch+=32;
    }
    cout<<"\nSwap Cased Is "<<ch<<endl;
    return 0;
}