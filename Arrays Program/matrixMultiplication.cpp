#include <iostream>
using namespace std;
int main()
{
    int mat1[3][3], mat2[3][3], ans[3][3];
    int n = 3, m = 3;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> mat1[i][j];
        }
    }

    cout << "\nEnter the Second Mat Array Element" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> mat2[i][j];
        }
    }

   cout<<"\nMatrix Multiplication Logic "<<endl;
   for (int  i = 0; i < n; i++)
   {
    for (int j=0;j<m;j++)
    {
        ans[i][j]=0;
        for(int k=0;k<n;k++){
            ans[i][j]+=mat1[i][k] * mat2[k][j];
        }
    }
    
   }
   

    cout<<"\nPrint Matrix"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<ans[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}