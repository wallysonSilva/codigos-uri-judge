#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout<<fixed<<setprecision(2);
    double S=0;
    for(double i=1; i<101; i++){
        S+=(1/i);
    }
    cout<<S<<endl;
return 0;
}
