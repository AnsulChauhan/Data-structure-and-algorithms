#include<iostream>
using namespace std;

int main(){
 int n;
 cout<<"Enter value of n  : ";
 cin>>n;
//  int a =0;
//  int b =1;
//  int sum=0;
//  cout<<a<<endl<<b<<endl;
//  for (int i = 0; i<=n; i++)
//  {
//     sum=a+b;
//          cout<<sum<<endl;

//     a=b;
//     b=sum;

//  }
int i =1;
bool isprime =1;



for(; i<n; i++){

  if(n%i==0)
  {
  isprime=0;
  break;
  }

}

if (isprime == 1)
{
      cout<<"no. is prime"<<endl;
}
else{
     cout<<" no. is not prime";

}


    return 0;
}