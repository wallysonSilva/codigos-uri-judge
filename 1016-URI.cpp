#include <iostream>
#include <string>
using namespace std;

int main(){
    int di, df, hi, hf, mi, mf, si, sf, soma, qd, qh, qm, qs;
    string dia, pontos;
    cin>>dia; cin>>di;
    cin>>hi>>pontos>>mi>>pontos>>si;
    cin>>dia; cin>>df;
    cin>>hf>>pontos>>mf>>pontos>>sf;
    //transformando as entradas em segundos
    di*=86400;
    df*=86400;
    hi*=3600;
    hf*=3600;
    mi*=60;
    mf*=60;
    soma=(df-di)+(hf-hi)+(mf-mi)+(sf-si);
    //calculo dias
    qd= (soma/(60*60*24));
    soma%=(60*60*24);
    //calculo horas
    qh=soma/(60*60);
    soma%=(60*60);
    //calculo minutos
    qm=soma/60;
    soma%=60;
    //calculo segundos
    qs=soma;
    cout<<qd<<" dia(s)\n"<<qh<<" hora(s)\n"<<qm<<" minuto(s)\n"<<qs<<" segundo(s)"<<endl;
return 0;
}
