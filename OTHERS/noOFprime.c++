#include<iostream>
using namespace std;

int noOFprime(int n){
int         s=0;
 
     for(int i=2;i<n;i++){
        if(n%i==0){
            
            s++;
        }
    }
    
cout<<s;
}


int main(){

    int n ;
    cin>>n;
    noOFprime(n);


}