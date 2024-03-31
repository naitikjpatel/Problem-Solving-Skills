#include<iostream>
using namespace std;
struct student{
    int marks[3];
    int total;
};
int main(){
    struct student s[10];
    int n;
    cout<<"\nHow many Student You want"<<endl;
    cin>>n;
    
    cout<<"\nEnter the Student Details "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"\nEnter the "<<i+1<<" student Marks"<<endl;
        int total=0;
        for(int j=0;j<3;j++){
            cout<<j+1<<"subject marks : ";
            cin>>s[i].marks[j];
            total+=s[i].marks[j];
            cout<<endl;
        }
        s[i].total=total;
    }
    
    cout<<"\nStudent Infromation With there Total Marks"<<endl;

     for (int i = 0; i < n; i++)
    {
        cout<<"\nEnter the "<<i+1<<" student Details"<<endl;
        
        for(int j=0;j<3;j++){
            cout<<s[i].marks[j]<<"\t";
        }
        cout<<s[i].total<<endl;
    }
    
    return 0;
}