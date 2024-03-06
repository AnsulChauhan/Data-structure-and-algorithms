#include <iostream>
using namespace std;
// int main() {
//     double n;

//     // Input character
//     cout << "Enter a farenheit limit more than 32 ";
//     cin >> n;

// //     // Check if the character is a lowercase letter
// //     if (ch >= 'a' && ch <= 'z') {
// //         std::cout << "Lower case" << std::endl;
// //     }
// //     // Check if the character is an uppercase letter
// //     else if (ch >= 'A' && ch <= 'Z') {
// //         std::cout << "Upper case" << std::endl;
// //     }
// //     // Check if the character is a numeric digit
// //     else if (ch >= '0' && ch <= '9') {
// //         std::cout << "Numeric" << std::endl;
// //     }x
// //     // If the character doesn't fall into any of the above categories
// //  
// //         std::cout << "Not a valid input" << std::endl;
// //     }
// double C =0;
// double F = 32;
// while(F<=n){
 
// cout<<"Fahrenheit  is : "<<F;
// C = ((0.556)*(F-32));
// cout<<"   &   IN celcius is:"<<C<<endl;

// F=F+1;
// }

//      return 0;
//  }


int main(){
    

    int n;
    cin>>n ;
  

     int i=1;
    int count =1;
     while (i<=n)

     {
         int j =1;
         while (j<=i){
            cout<<count;
            count=count +1;
            
            
            j++;
         }
         cout<<endl;
        i=i+1;
     }
    return 0;
}