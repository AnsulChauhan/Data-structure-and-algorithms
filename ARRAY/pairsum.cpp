#include<iostream>
using namespace std;

int main(){

    int arr []= {1,2,3,4,5,6,0};

    int target;
    cin >>target;


    for (int i =0;i<7;i++){
        for (int  j=i+1;j<7;j++)
            {
                if(arr[i]+arr[j]==target){
                    cout<<arr[i]<<"&"<<arr[j]<<endl;
                    
                }
            }
    }

    return 0;

}