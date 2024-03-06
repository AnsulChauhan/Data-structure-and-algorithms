#include<bits/stdc++.h>
using namespace std;

void update(int no[], int n){

    cout<<"inside"<<endl;
no[0]=34;

for (int i=0;i<n;i++){
    cout<<no[i]<<endl;
}



    cout<<"Outside"<<endl;
}

int main(){


int no[3]={1,2,4};

update(no,3);


int n =3;
for (int i=0;i<n;i++){
    cout<<no[i]<<endl;
}


}