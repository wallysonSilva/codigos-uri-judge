#include <iostream>
using namespace std;

int main(){
    int c, al(0), ga(0), di(0);
    cin>>c;
    do{
        if(c==1){
            al++;
        }
        else if(c==2){
            ga++;
        }
        else if(c==3){
            di++;
        }
        cin>>c;

    }while(c!=4);
    cout<<"MUITO OBRIGADO\n"<<"Alcool: "<<al<<"\nGasolina: "<<ga<<"\nDiesel: "<<di<<endl;

return 0;
}
