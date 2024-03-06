#include<bits/stdc++.h>
using namespace std;

int getmax(int no[], int n){
 
    int max = INT_MIN;


    for(int i=0; i<n;i++){

        if(no[i]>max){
        max=no[i];

        }



    }
    return max;
}

int getmin(int no[], int n){
 
    int mino = INT_MAX;


    for(int i=0; i<n;i++){

        // if(no[i]< min){
        // min=no[i];

        // }
        mino = min(mino, no[i]);


    }
    return mino;
}


int main(){


int no[3];


int n =3;
for (int i=0;i<n;i++){
    cout<<"enter no : ";
    cin>>no[i];
}

for (int i=0;i<n;i++){
    cout<<no[i]<<endl;
}

cout<<no<<endl;


cout<<"Min NO IS "<<getmin(no,3)<<endl;
cout<<"MAX NO IS "<<getmax(no,3)<<endl;

}