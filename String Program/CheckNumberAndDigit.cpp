#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"\nEnter the character "<<endl;
    cin>>ch;

    if( ('a'<=ch && 'z'>=ch) || ('A'<=ch && 'Z'>=ch)){
        cout<<"\nEntered Character is Alphabet" <<endl;
    }
    else{
        cout<<"\nEntered Character is Number "<<endl;
    }
    return 0;
}