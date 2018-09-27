#include <iostream>
using namespace std;

int main(){
    int val, pares=0, impares=0, posi=0, neg=0, zero=0;
    for(int i=0; i<5; i++){
        cin>>val;
        if((val%2)==0){
            pares++;
        }
        impares=5-pares;

        if(val>=0){
            if(val==0)
                zero++;
            else
                posi++;
        }
        neg=5-posi-zero;
    }
    cout<<pares<<" valor(es) par(es)\n"<<impares<<" valor(es) impar(es)\n"<<posi<<" valor(es) positivo(s)\n"<<neg<<" valor(es) negativo(s)"<<endl;
return 0;
}
