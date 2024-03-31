#include<iostream>
using namespace std;
void reverseString(string &str){
     int s=0;
     int e=str.length()-1;
     while (s<=e)
     {
        swap(str[s],str[e]);
        s++;e--;
     }
     
    
}
int main(){
    string s;
    cout<<"\nEnter the string you want to reverse "<<endl;
    getline(cin,s);
    reverseString(s);
    cout<<"\nReverse String is "<<s;
    return 0;
}