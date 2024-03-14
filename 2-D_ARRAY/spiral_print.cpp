#include <iostream>
using namespace std;

void spiral(int arr[6][6], int row, int col)
{

    int r = row - 1;
    int c = col - 1;
    int count = 0;

    while (count < row)
    {

        // 1.........for i same  and j left to right

        for (int i = (0 + count), j = (0 + count); j <= (c - count); j++)
        {
            cout << arr[i][j] << " ";
        }

        // 2.........for i up-down  and j remains same

        for (int i = (1 + count), j = (c - count); i <= (c - count); i++)
        {
            cout << arr[i][j] << " ";
        }

        // 3.........for i same  and j right to left

        for (int i = (r - count), j = ((c - 1) - count); j >= (0 + count); j--)
        {
            cout << arr[i][j] << " ";
        }
        // 4..........for i down-up  and j remains same

        for (int i = ((r - 1) - count), j = (0 + count); i >= (1 + count); i--)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;

        count++;
    }
}

void printarray(int arr[6][6])
{

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }
}

int main()
{

    int arr[6][6] = {{1,  2,  3,  4,  5,  6},
                     {20, 21, 22, 23, 24, 7},
                     {19, 32, 33, 34, 25, 8},
                     {18, 31, 36, 35, 26, 9},
                     {17, 30, 29, 28, 27, 10},
                     {16, 15, 14, 13, 12, 11}};
    printarray(arr);

    spiral(arr, 6, 6);

    return 0;
}
