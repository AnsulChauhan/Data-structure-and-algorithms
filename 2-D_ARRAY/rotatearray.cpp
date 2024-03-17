#include <iostream>
using namespace std;

void rotate90(int arr[3][3]) {
    // Transpose the matrix
    for (int i = 0; i < 3; i++) {
        for (int j = i; j < 3; j++) {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    // Reverse each row
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 1.5; j++) {
            int temp = arr[i][j];
            arr[i][j] = arr[i][2 - j];
            arr[i][2 - j] = temp;
        }
    }
}

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    cout << "Original Matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    rotate90(arr);

    cout << "\nRotated Matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
