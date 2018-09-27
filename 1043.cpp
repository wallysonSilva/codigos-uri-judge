#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    float a, b, c;
    cin>>a>>b>>c;
    if(   (abs(b-c) < a && a < b+c) &&  (abs(a-c) < b && b < a+c)  &&  (abs(a-b) < c && c < b+a)  ){
        cout<<"Perimetro = "<<fixed<<setprecision(1)<<(a+b+c)<<endl;
    }
    else{
        cout<<"Area = "<<fixed<<setprecision(1)<<(((a+b) *c)/2)<<endl;
    }
return 0;
}
