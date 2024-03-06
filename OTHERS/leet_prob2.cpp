#include<iostream>
using namespace std;

int main(){


int arra[4]={1,2,3,4};

int arrb[2]={3,4};

for (int i =0;i<4;i++){

    for(int j=0; j<2;j++ ){

        if(arra[i]==arrb[j])
            {
                cout<< arra[i]<< " a" << i << " "<< j << endl;
            }
        
    }

}




    return 0;
}