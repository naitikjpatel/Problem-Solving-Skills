#include<iostream>
using namespace std;
int main(){
    int no=10;
    int n1=0;
    int n2=1;
    int temp=0;
    int cnt=1;
    while(cnt  <= no){
        temp=n1+n2;
        n1=n2;
        n2=temp;
        cout<<temp <<"\t";
        cnt++;
    }
    return 0;
}