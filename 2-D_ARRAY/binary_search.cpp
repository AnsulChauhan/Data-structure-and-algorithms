#include<iostream>
using namespace std;



bool  binarysearch(int arr[][3],int row ,int col,int target)
{
    int start =0;
    int end=(row*col)-1;
    
    int mid =(start+end)/2;
    for (int i =0;i<(row);i++){

        for (int  j =0;i<(col);j++){

                if(arr[i][j]==target){
                    return 1;
                }

        }
    }
    return 0;


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

int main()
{
    int arr[3][3] = {1, 4, 5, 3, 4, 6, 0, 9, 8};
    printarray(arr);

    int target;
    cin>>target;
    bool binary=binarysearch(arr,3,3,target);

    cout<<binary;
    return  0;
}