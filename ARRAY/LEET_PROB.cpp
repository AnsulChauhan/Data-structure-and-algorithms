#include <iostream>
using namespace std;

int Xoor(int arr[], int n)
{

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        count = count ^ arr[i];
    }
    return count;
}

int main()
{
    int n;
    cout << "Enter no. of elements in array: " << endl;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "unique no . is :  " << Xoor(arr, n);
    cout << "unique no . is :  " << Xoor(arr, n);
    cout << "unique no . is :  " << Xoor(arr, n);
    cout << "unique no . is :  " << Xoor(arr, n);
    cout << "unique no . is :  " << Xoor(arr, n);
    cout << "unique no . is :  " << Xoor(arr, n);

    return 0;
}