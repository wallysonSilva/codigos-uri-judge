#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int cod ,quant;
    cin>>cod>>quant;
    switch (cod){
        case 1:
            cout<<"Total: R$ "<<fixed<<setprecision(2)<<(quant*4.00)<<endl;
        break;
        case 2:
            cout<<"Total: R$ "<<fixed<<setprecision(2)<<(quant*4.50)<<endl;
        break;
        case 3:
            cout<<"Total: R$ "<<fixed<<setprecision(2)<<(quant*5.00)<<endl;
        break;
        case 4:
            cout<<"Total: R$ "<<fixed<<setprecision(2)<<(quant*2.00)<<endl;
        break;
        case 5:
            cout<<"Total: R$ "<<fixed<<setprecision(2)<<(quant*1.50)<<endl;
        break;
    }

return 0;
}
