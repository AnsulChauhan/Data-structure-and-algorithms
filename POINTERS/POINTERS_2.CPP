#include<iostream>

using namespace std;

int main(){

    int arr[10]={10,3,6,5,4,8,89};
    cout<<"address of different blocks of array"<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
    cout<<arr<<endl;
    cout<<&arr[0]<<endl;



    cout<<"array with one value at different blocks"<<endl;
    for(int i =0;i<10;i++){
        cout<<"array at "<<i<<"=="<<arr[i]<<endl;
    }
    

    cout<<*(arr)+1<<endl;
    cout<<*(arr+1)<<endl;
    cout<<2[arr]<<'&'<<arr[2]<<endl;
    cout<<*(2+arr)<<endl;

    int *q =&arr[0];
    cout<<"address of  arr[0] = "<<q<<endl;
    cout<<"adress of q = "<<&q<<endl;
    cout<<sizeof(q)<<endl;
    cout<<sizeof(&q)<<endl;


    cout<<sizeof(arr)<<endl;
    cout<<sizeof(*arr)<<endl;
    





    return 0;
}