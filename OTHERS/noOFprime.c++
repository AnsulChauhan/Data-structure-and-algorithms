#include<iostream>
using namespace std;

int noOFprime(int n){
int sum=0;

     for(int i=2;i<n;i++){
        if(n%i==0){
            
            sum++;
        }
    }
    
cout<<sum;
}


int main(){

    int n ;
    cin>>n;

    noOFprime(n);


}