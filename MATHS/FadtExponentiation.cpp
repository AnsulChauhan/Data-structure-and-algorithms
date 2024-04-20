#include<iostream>
using namespace std;

int main(){

    int a ,a_power;
    cout<<"Enter no."<<endl;
    cin>>a;
    cout<<"Enter power"<<endl;
    cin>>a_power;
    int ans=1;
    for(int i =0;i<a_power;i++){

        ans =ans*a;
        // int a = a*a_power;

    }

    cout<<ans<<"answer"<<endl;



    return 0;
}