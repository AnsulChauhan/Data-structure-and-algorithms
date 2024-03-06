#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> a;
    int h;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter element in vector  " << i << " :" << endl;
        cin >> h;
        a.push_back(h);
    }

    for (int i = 0; i < 5; i++)
    {
        cout << a.at(i) << "  ";
    }

    return 0;
}