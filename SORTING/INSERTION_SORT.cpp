#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n)
{

    int i = 1;
    while (i < n)
    {
        int temp = arr[i];

            int j = i - 1;
            while (j >= 0)
            {
            if (arr[j]>temp){
                arr[j+1] =arr[j];

            }
            else{

                break;
            }

            j--;
            }
            arr[j+1]=temp;

        i++;
    }
}

int main()
{

    int arr[7] = {1, 5, 6, 7, 3, 4, 5};

    insertion_sort(arr, 7);

    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;


    return 0;
}