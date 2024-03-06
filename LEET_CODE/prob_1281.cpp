#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n :"<<endl;
    cin>>n;
    int prod =1;
    int sum  =0;
    while(n!=0){

        int a =n%10;
        prod = prod*a;
        sum= sum+a;

        n=n/10;
    }

    n=prod-sum;
    cout<<n;

    return 0;
}