#include <iostream>

using namespace std;

int main()
{
    int m,n,i,j;

    cout << "Enter matrix dimensions (m-rows, n-columns):";
    cin >> m >> n;

    // Memory allocation
    int var[m][n], ans[n][m];

    // Read matrix from user
    cout << "Enter matrix:" << endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin >> var[i][j];
        }
    }

    // Ask user what he/she would like to do?
    int option;
    cout << "What would you like to do?" << endl;
    cout << "1. Transpose" << endl;
    cout << "2. Exit" << endl;
    cin >> option;
    switch(option)
    {
        case 1:
            ans = local_transpose(var);
            break;

        case 2:
            break;

        default:
            cout << "Invalid option!" << endl;
    }

    // Display ans


    return 0;
}
