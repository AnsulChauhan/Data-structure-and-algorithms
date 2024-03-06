#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter No. of elements in array : " << endl;
    cin >> n;

    int arr[n];
    cout << "Enter elements in array : " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }


    int count = 0;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] > count)
        {
            count = i;
        }
    }

    for(int i =0; i<n;i++){

        cout<<arr[i]<<"  ";

    }
    
    cout <<endl<< count << endl;
    return 0;
}