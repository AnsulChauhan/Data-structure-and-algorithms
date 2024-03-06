#include<bits/stdc++.h>
using namespace std;
int selection_sort(int arr[], int n){

    for(int i=0; i<n-1;i++){
            int minindex = i;

            for (int  j = i+1; j < n; j++)
            {
                if(arr[j]    >  arr[minindex]){
                    minindex=j;
                }        
            }
        swap(arr[minindex], arr[i]);

    }
}


int main(){

   int  arr[5]={3,4,2,1,0};

   selection_sort(arr,5);


  for (int i = 0; i < 5; i++)
  {
    cout<<arr[i]<<"  ";
  }
  

}


/*
output - 4 3 2 1 0 
output - 0 1 2 3 4


time complexity = O(n^2)

best case = already sorted = O(n^2)
worst case= O(n^2)

*/