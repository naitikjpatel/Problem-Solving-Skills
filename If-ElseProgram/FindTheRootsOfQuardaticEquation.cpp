#include<iostream>
#include<math.h>
using namespace std;
int main(){

    float a,b,c,root1,root2,discriminant;
    cout<<"\nEnter the value of a ,b and c :\n";
    cin>>a>>b>>c;
    discriminant=b*b-4*a*c;

    if(discriminant<0){
        //negative
        cout<<"\nRoots are imaginary";
    }
    else{
        root1=(-b+sqrt(discriminant))/(2*a);
        root2=(-b-sqrt(discriminant))/(2*a);

        cout<<"\nRoot1 = "<<root1<<" ,root2 = "<<root2;

    }
    return 0;
}