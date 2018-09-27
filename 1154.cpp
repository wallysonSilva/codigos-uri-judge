#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double id, soma(0), cont(0), media;
    cin>>id;
    while(id>0){
        cont++;
        soma+=id;
        cin>>id;
    }
    media=soma/cont;
    cout<<fixed<<setprecision(2)<<media<<endl;
return 0;
}
