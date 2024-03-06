#include <iostream>
#include <array>
using namespace std;

int main()
{

    array<int, 4> a = {1, 2, 3, 40};
    cout << "ARRAY SIZE : " << a.size() << endl;
    cout << "ELEMENT AT INDEX 3  : " << a.at(3) << endl;
    cout << "WHEATHER ARRAY IS EMPTY OR NOT  : " << a.empty() << endl;
    cout << "FIRST ELEMENT : " << a.front();
    cout << "LAST ELEMENT : " << a.back();
}