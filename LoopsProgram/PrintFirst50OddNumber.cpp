#include<iostream>
using namespace std;
int main(){
    int n=1;
    
    int count=0;
    
    while(count<50){
        if(n%2!=0){
            cout<<n<<" ";
            count++;
        }
        n++;
    }

    

    return 0;
}