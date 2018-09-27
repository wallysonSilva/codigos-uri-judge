#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    double S=1.0, x=2.0;
    for(double i=3.0; i<40.0; i+=2.0){
       S+=(i/(x));
       x*=2.0;
    }
    cout<<fixed<<setprecision(2)<<S<<endl;
return 0;
}
