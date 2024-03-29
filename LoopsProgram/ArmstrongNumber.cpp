// This Question For the Check the number is armstrong or not?

#include <iostream>
using namespace std;
int main()
{
    int no;
    cout << "\nEnter the Number" << endl;
    cin >> no;

    int cnt = 0;
    int temp = no;
    int old=temp;
    while (no)
    {
        no /= 10;
        cnt++;
    }

    int ans = 0;
    while (temp != 0)
    {
        int digit = temp % 10;
        int temp1=1;
        for(int i=0;i<cnt;i++){
            temp1=temp1*digit;
        }
        ans+=temp1;
        temp/=10;
    }

    if (old==ans){
        cout<<"\nArmStrong Number"<<endl;
    }
    else{
        cout<<"\nNot ArmStrong Number"<<endl;
    }
    return 0;
}