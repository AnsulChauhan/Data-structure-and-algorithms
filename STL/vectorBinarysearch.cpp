#include <iostream>
#include <vector>
using namespace std;

void printvector(vector<vector<int>> c)
{

    for (int i = 0; i < c.size(); i++)
    {
        for (int j = 0; j < c[i].size(); j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}

bool binarysearch(vector<vector<int>> c, int t)
{
    int row = c.size();
    int col = c[0].size();

    int s = c[0][0];
    int end = row * col - 1;
    int mid = s + (end - s) / 2;

    while (end >= s)
    {
        int element = c[mid / col][mid % col];

        if (element == t)
        {
            return 1;
        }
        if (element < t)
        {
            s = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = s + (end - s) / 2;
    }
    return 0;
}
int main()
{

    vector<vector<int>> a{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    printvector(a);
    int target;
    cin >> target;
    int b = binarysearch(a, target);

    if (b == 1)
    {
        cout << "true";
    }

    else
    {
        cout << false;
    }


    return 0;
}