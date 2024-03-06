#include <iostream>
using namespace std;


int main(){
    
    
// int n;
//     cin>>n ;
  

//      int i=0;
    
//      while (i<=n)

//      {
//          int j =1;
//          while (j<=i){
//             cout<<j +i-1<<" ";
            
            
//             j++;
//          }
//          cout<<endl;
//         i=i+1;
//      }


// prob 2
   int n;
    cin>>n ;
  
     int i=1;
     while (i<=n)

     {
         int j =1;
                  char ch ='A';

     
         while (j<=n){
           
            ch='A'+i+j-1;
            cout<<ch<<" ";
            
            
            j++;
         }
         cout<<endl;
        i=i+1;
     }
  
//    int n;
//     cin>>n ;
//    char ch = 'A';
         
//      int i=1;
//      while (i<=n)
//      {
//          int j =1;
//          while (j<=n){
//             cout<<ch<<" ";  
//             ch = ch+1;         
//             j++;
//          }
//          cout<<endl;
//         i=i+1;
//      }

//     return 0;
}