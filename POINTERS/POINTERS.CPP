#include <iostream>
using namespace std;

int main()
{

    int a = 0;

    cout << "Value of a is " << a << endl
         << "And its adderss is: " << &a << endl;

    int *ptr = &a;




    double b = 5.6;
    double *p = &b;
    cout << ptr << endl;
    (*ptr)++;
    cout << a << endl;
    cout << *ptr << endl
         << a << endl; // gives garbage value
    cout << sizeof(a) << endl;
    cout << sizeof(ptr) << endl;
    cout << sizeof(b) << endl;
    cout << sizeof(p) << endl;


    //copying a pointer
    cout<<&(*ptr)<<endl;
    int *pt = &(*ptr);
    cout<<pt<<"((((((()))))))"<<ptr<<endl;

    cout<<*pt<<"((((((()))))))"<<*ptr<<endl;
    (*pt)++;
    cout<<*pt<<endl;

    cout<<"Before pt+1 ==" <<pt<<endl;
    pt=pt+1;
    cout<<"after pt +1 =="<<pt<<endl;
    cout<<*pt<<endl;


    int d = *ptr;
    d++;
    cout<<a<<endl;
    cout<<d<<endl;




    //null pointer
    int *y =0;
    cout<<*y<<endl;
    cout<<y<<endl;
    /*
    Value of a is 0
    And its adderss is: 0x61ff08
    x61ff08
    0
    6422284  this is the garbage value
    */
}