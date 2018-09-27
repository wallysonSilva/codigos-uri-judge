#include <iostream>
using namespace std;

int main(){
    int hini, mini, hfim, mfim;
    cin>>hini>>mini>>hfim>>mfim;
    if((hini>=0) && (mini>=0 && mini<=59) && (hfim>=0) && (mfim>=0 && mfim<=59)) {
        if(hini==hfim && mini==mfim){
            cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)"<<endl;
        }
        else if(hini==hfim && mini!=mfim){
            cout<<"O JOGO DUROU 0 HORA(S) E ";
            if(mini<=mfim){
                cout<< (mfim-mini) <<" MINUTO(S)"<<endl;
            }
            else if(mini>=mfim){
                cout<< ((60-mini)+mfim) <<" MINUTO(S)"<<endl;
            }
        }
        else if(hini<hfim){
            if(mini<=mfim){
                cout<<"O JOGO DUROU "<<(hfim-hini)<<" HORA(S) E "<< (mfim-mini) <<" MINUTO(S)"<<endl;
            }
            else if(mini>=mfim){
                cout<<"O JOGO DUROU "<<((hfim-hini)-1)<<" HORA(S) E "<< ((60-mini)+mfim) <<" MINUTO(S)"<<endl;
            }
        }
        else{
            if(mini<=mfim){
                cout<<"O JOGO DUROU "<<((24-hini)+hfim)<<" HORA(S) E "<< (mfim-mini) <<" MINUTO(S)"<<endl;
            }
            else if(mini>=mfim){
                cout<<"O JOGO DUROU "<<(((24-hini)+hfim)-1)<<" HORA(S) E "<< ((60-mini)+mfim) <<" MINUTO(S)"<<endl;
            }
        }
    }
return 0;
}
