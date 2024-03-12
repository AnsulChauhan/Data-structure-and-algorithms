#include <iostream>
using namespace std;

int Taking_input(int arr[3][3])
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
}

void giving_output_row(int arr[3][3])
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int giving_output_col(int arr[3][3])

{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}

int main()
{

    int arr[3][3] = {{1, 4, 5}, {3, 4, 6}, {0, 9, 8}};
    // Taking_input(arr);
    giving_output_row(arr); // row-wise
    // giving_output_col(arr); // Column-wise

    return 0;
}