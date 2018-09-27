#include <iostream>
#include <string>
using namespace std;

int main(){
    string senha_padrao="2002", senha_digitada;
    bool acesso=0;

    while(!acesso){
        cin>>senha_digitada;
        if(senha_padrao==senha_digitada){
            cout<<"Acesso Permitido"<<endl;
            acesso=1;
        }
        else{
            cout<<"Senha Invalida"<<endl;
        }
    }
return 0;
}
