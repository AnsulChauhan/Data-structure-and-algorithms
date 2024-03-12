#include <iostream>
using namespace std;

// bool traversal(int arr[3][3], int t) // Adjusted return type to bool
// {
//     bool found = false;
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             if (arr[i][j] == t)
//             {
//                 cout << "Target found at position: " << i << " " << j << endl;
//                 found = true;
//             }
//         }
//     }
//     if (!found)
//     {
//         cout << "Target not found" << endl; // Indicate target not found
//     }
//     return found; // Return the found status
// }
// int traversal(int arr[3][3], int t)
// {

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             if (arr[i][j] == t)
//             {
//                 return 1;
//             }
//         }
//     }
//     return 0;
// }
void printarray_up_down(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        if (i % 2 == 0) // For even rows (0 and 2), print normally
        {
            for (int j = 0; j < 3; j++)
            {
                cout << arr[j][i] << ' ';
            }
        }
        else // For odd rows (1), print in reverse order
        {
            for (int j = 2; j >= 0; j--)
            {
                cout << arr[j][i] << ' ';
            }
        }
        cout << endl;
    }
}


void printarray(int arr[3][3])
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
}

// void togetsum_row(int arr[3][3])
// {

//     for (int i = 0; i < 3; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < 3; j++)
//         {
//             sum += (arr[i][j]);
//         }
//         cout << sum << endl;
//     }
// }
// void togetsum_col(int arr[3][3])
// {

//     for (int i = 0; i < 3; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < 3; j++)
//         {
//             sum += (arr[j][i]);
//         }
//         cout << sum << endl;
//     }
// }

int main()
{
    int arr[3][3] = {1, 4, 5, 3, 4, 6, 0, 9, 8};
    printarray(arr);
    printarray_up_down(arr);

    // int target;
    // cin >> target;

    // if (traversal(arr, target)==1){
    //     cout<<"Target found "<<endl;;

    // }
    // else {
    //     cout<<"Target not found"<<endl;
    // }

    // togetsum_row(arr);
    // togetsum_col(arr); // Call traversal function

    return 0;
}
