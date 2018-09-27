#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    double A, B, C, R1, R2, radicando;
    cin>>A>>B>>C;
    radicando=(pow(B, 2))-(4*A*C);
    if(radicando<0 || A==0){
        cout<<"Impossivel calcular"<<endl;
    }
    else{
        cout<<"R1 = "<<fixed<<setprecision(5)<<(R1=(-B+sqrt(radicando)) / (2*A))<<endl;
        cout<<"R2 = "<<fixed<<setprecision(5)<<(R2=(-B-sqrt(radicando)) / (2*A))<<endl;
    }
return 0;
}
