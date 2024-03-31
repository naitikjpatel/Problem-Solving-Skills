#include<iostream>
using namespace std;
struct Student
{
    int no;
    string name;
    int marks;
}s[10];

int main(){
    int n;
    cout<<"\nHow many Student"<<endl;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the information of "<<i+1<<" student"<<endl;
        cout<<"Enter the No : ";
        cin>>s[i].no;
        cout<<"\nEnter the Name : ";
        cin>>s[i].name;
        cout<<"\nEnter the marks : ";
        cin>>s[i].marks;

    }


    cout<<"\n===================Student Information============================="<<endl;
    cout<<"\nNo         Name        Marks"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<s[i].no<<"        "<<s[i].name<<"       "<<s[i].marks<<endl;
    }
    
    
    return 0;
}