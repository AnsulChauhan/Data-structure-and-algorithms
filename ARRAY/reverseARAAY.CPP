#include <iostream>
using namespace std;


int hourglass(int arr[6][6]){
int sum =0;

    for (int  i =0;i<4;i++){
        for (int j=0;j<4;j++){
            int a = arr[i][j]+  arr[i][j+1]+   arr[i][j+2]+
                                arr[i+1][j+1]+
                    arr[i+2][j]+arr[i+2][j+1]+ arr[i+2][j+2];

                    if(a>sum){
                        sum =a;
                    }
        }
    }
    return sum;
}

void printarray(int arr[6][6]){
    for (int i =0;i<6;i++){
        for (int j =0;j<6;j++){
            cout<<arr[i][j] <<"  ";
        }cout<<endl;
    }

}


int main()
{

    int arr[6][6] =
    { 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 2, 4, 4, 0, 0, 0, 0, 2, 0, 0, 0, 0, 1, 2, 4, 0 };
printarray(arr);

 int b =hourglass(arr);
cout<<b;
    return 0;
}