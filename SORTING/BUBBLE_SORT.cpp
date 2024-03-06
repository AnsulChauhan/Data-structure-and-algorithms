#include<iostream>
using namespace std;


void sortingArray_decreasing(int arr[], int n){


    for(int i = 0; i<n;i++){

     bool swapped= false;
       for (int j=0;j<n-i-1;j++)
        {

           if(arr[j] < arr[j+1]){
           swap(arr[j],arr[j+1]);
           swapped = true;   
           }
        }
        if(swapped==false)
        break;
    }
    
}
void sortingArray_incresasing(int arr[], int n){


    for(int i = 0; i<n;i++){

        bool swapped = false;
       for (int j=0;j<n-i-1;j++)
        {

           if(arr[j] > arr[j+1]){
           swap(arr[j+1],arr[j]);
                
        
            swapped = true;   
           }
        }
        if(swapped==false)
        break;

    }

}


int main(){


int arr[5]= {4,6,3,8,1};

sortingArray_incresasing(arr,5);

for (int i = 0; i < 5; i++)
{
    cout<<arr[i]<<"  ";
}cout<<endl;

sortingArray_decreasing(arr,5);

for (int i = 0; i < 5; i++)
{
    cout<<arr[i]<<"  ";
}


}

