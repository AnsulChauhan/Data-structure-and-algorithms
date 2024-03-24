#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int a[] = {1, 3, 5};
    int b[] = {2, 4};
    int size_a = sizeof(a) / sizeof(a[0]);
    int size_b = sizeof(b) / sizeof(b[0]);
    int size_c = size_a + size_b;
    int c[size_c];

    for (int i = 0; i < size_a; i++) {
        c[i] = a[i];
    }

    for (int i = 0; i < size_b; i++) {
        c[i + size_a] = b[i];
    }
    bubbleSort(c, size_c);

    
    cout << "Sorted Array 'c': ";
    for (int i = 0; i < size_c; i++) {
        cout << c[i] << " ";
    }
    cout << endl;

    return 0;
}
