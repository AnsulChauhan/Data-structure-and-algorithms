#include<bits/stdc++.h>
using namespace std;


// int sum(int arr[],int n){

//         int suM =arr[0];

//         for (int i =1; i<n ;i++){

//             suM=suM+arr[i];
//         }
//     return suM;

// }



bool search (int arr[], int size ,int n){


    for (int i=0; i< size; i++){

        if (arr[i]== n)
        {
            return 1;
        }
        

    }
    return 0;


}


int printarray(int arr[],int n){

    for(int i=0; i<n;i++){

    cout<<arr[i]<<"  ";

}


}
int swaparray(int arr[],int n){
for (int start=0, end=n-1; start<end;start++,end--){

    swap(arr[start],arr[end]);
    

   }

}

int swap_alternate(int arr[],int n){

    for (int start=0, end=start+1; end<n;start+=2,end+=2){

    swap(arr[start],arr[end]);
    

   }


}


int input(int arr[],int n){

 
for (int i =0;i<n;i++){
            cin>>arr[i];

    }

}



// int reverse(int arr[], int n){

// return arrb[n];


// }

int main(){
//     int suM;
//     int n;
    
//     cout<<"Enter array size : "<<endl;
//     cin>>n;
    
//     int arr[n];
//     cout<<"Enter array Elements : "<<endl;
//     for (int i =0;i<n;i++){
//             cin>>arr[i];

//     }
   

//    for (int i=0 ; i<n ; i++){


//         cout<<arr[i]<<endl;
//    }
//  int arr[3]={1,2,3};
// int a=sum(arr,n);
// cout<<"Sum Is :  "<< a<<endl;
int n;




cout<<"Enter element to search : "<<endl;
cin>>n;
int arr[n];
// bool found=search(arr,3, n);

// if (found){

//     cout<<"Element is present "<<endl;
// }

// else {
//     cout<<"Element is not present "<<endl;


// }

input(arr,n);
printarray(arr,n);
cout<<endl;
swaparray(arr,n);
printarray(arr,n);
cout<<endl;
swap_alternate(arr,n);
printarray(arr,n);

return 0;
}


