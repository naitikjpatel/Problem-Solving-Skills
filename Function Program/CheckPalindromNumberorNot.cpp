#include<iostream>
using namespace std;
bool isPalindrom(int n){
    int temp=n;
    int reverse=0;
    while (n!=0)
    {
        int digit=n%10;
        reverse =reverse*10 +digit;
        n/=10;
    }
    if (reverse==temp)
    {
        return true;
    }
    return false;
    
    
}
int main(){
    int n;
    cout<<"\nEnter the number "<<endl;
    cin>>n;

    bool ans=isPalindrom(n);
    if(ans){
        cout<<n<<" is palindorm number"    <<endl;
    }
    else{
        cout<<n<< " is not palindrom number"<<endl;
    }
    return 0;
}