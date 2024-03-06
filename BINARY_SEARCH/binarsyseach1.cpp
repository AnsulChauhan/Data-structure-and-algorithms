#include<iostream>
using namespace std;

int binarysearch(int arr[], int size ,int key){

int s = 0;
int e = size-1;

int mid = s+(e-s)/2;

while (s<=e)
{
    if (arr[mid]==key)
    {
        return mid;
    }
    if(key>arr[mid]){

        s=mid+1;

    }
    else{
        e=mid-1;
    }

mid = s+(e-s)/2;
}

return -1;


}



int main(){


    int even[6]={1,2,3,4,5,6};
    int arr2[]={0,2,3,4,5};

    int evenIndex = binarysearch(even , 6 , 4);
    cout<<evenIndex<<endl;
    int oddIndex = binarysearch(arr2 , 5 , 0);
    cout<<oddIndex<<endl;
    // cout<<a<<endl<<b;


    return 0;

}