#include <iostream>
using namespace std;

int length(char arr[]) {
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++) {
        count++;
    }
    return count;
}

char convertToLower(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch - 'A' + 'a';
    }
    return ch;
}

bool isSpecialChar(char ch) {
    return (ch == '!' || ch == '@' || ch == '#' || ch == '$' || ch == '%' || ch == '^' || ch == '&' || ch == '*');
}

int palindrome(char arr[], int n) {
    int s = 0;
    int e = n - 1;

    while (s <= e) {
        if (isSpecialChar(arr[s])) {
            s++;
        } else if (isSpecialChar(arr[e])) {
            e--;
        }
        if (convertToLower(arr[s]) != convertToLower(arr[e])) {
            return 0; // Not a palindrome
        }

        s++;
        e--;
    }
    return 1; // Palindrome
}

int main() {
    char arr[30];
    cin >> arr;
    cout << arr << endl;

    int size = length(arr);
    cout << size << endl;

    int isPalindrome = palindrome(arr, size);
    if (isPalindrome == 1) {
        cout << "It is a Palindrome " << endl;
    } else {
        cout << "It is not a Palindrome" << endl;
    }

    return 0;
}
