#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int cont=1;
    float n1, n2;
        cin>>n1;
        while(n1<0.0 || n1>10.0){
            cout<<"nota invalida"<<endl;
            cin>>n1;
        }

        cin>>n2;
        while(n2<0.0 || n2>10.0){
            cout<<"nota invalida"<<endl;
            cin>>n2;
        }
        cout<<"media = "<<fixed<<setprecision(2)<<((n1+n2)/2)<<endl;
return 0;
}
