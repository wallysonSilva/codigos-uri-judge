#include <iostream>
using namespace std;

int main(){
    double dec=0.0;
    for(double i=0; i<=2 ; i+=0.2){
        for(double j=1, k=0; k<3 ; j++, k++){
            cout<<"I="<<i<<" "<<"J="<<(j+dec)<<endl;
        }
        dec+=0.2;
    }
return 0;
}
