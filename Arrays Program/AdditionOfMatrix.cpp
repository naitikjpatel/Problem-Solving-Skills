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

    cout << "Matrix Addition Logic" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            ans[i][j] = mat1[i][j] + mat2[i][j];
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