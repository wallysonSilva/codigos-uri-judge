#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    double v, notas1, moedas;
    int n100, n50, n20, n10, n5, n2, m1, m50, m25, m10, m5, m01, moedas1, notas;
    cin>>v;
    moedas = modf(v, &notas1);
    notas=notas1;
    moedas1=(moedas*100.0)+0.5;

        n100=notas/100;
        notas-=(n100*100);

        n50=notas/50;
        if(n50>0){
            notas-=(n50*50);
        }

        n20=notas/20;
        if(n20>0){
            notas-=(n20*20);
        }

        n10=notas/10;
        if(n10>0){
            notas-=(n10*10);
        }

        n5=notas/5;
        if(n5>0){
            notas-=(n5*5);
        }

        n2=notas/2;
        if(n2>0){
            notas-=(n2*2);
        }

        m1=notas/1;

        m50=moedas1/50.0;
        if(m50>0.0){
            moedas1-=(m50*50.0);
        }

        m25=moedas1/25.0;
        if(m25>0.0){
            moedas1-=(m25*25.0);
        }
        m10=moedas1/10.0;
        if(m10>0.0){
            moedas1-=m10*10.0;
        }

        m5=moedas1/5.0;
        if(m5>0.0){
            moedas1-=(m5*5.0);
        }

        m01=moedas1/1.0;

    cout<<"NOTAS:\n"<<fixed<<setprecision(2)<<n100<<" nota(s) de R$ 100.00"<<"\n"<<fixed<<setprecision(2)<<n50<<" nota(s) de R$ 50.00"<<"\n"<<fixed<<setprecision(2)<<n20<<" nota(s) de R$ 20.00"<<"\n"<<fixed<<setprecision(2)<<n10<<" nota(s) de R$ 10.00"<<"\n"<<fixed<<setprecision(2)<<n5<<" nota(s) de R$ 5.00"<<"\n"<<fixed<<setprecision(2)<<n2<<" nota(s) de R$ 2.00"<<endl;
    cout<<"MOEDAS:\n"<<fixed<<setprecision(2)<<m1<<" moeda(s) de R$ 1.00"<<"\n"<<fixed<<setprecision(2)<<m50<<" moeda(s) de R$ 0.50"<<"\n"<<fixed<<setprecision(2)<<m25<<" moeda(s) de R$ 0.25"<<"\n"<<fixed<<setprecision(2)<<m10<<" moeda(s) de R$ 0.10"<<"\n"<<fixed<<setprecision(2)<<m5<<" moeda(s) de R$ 0.05"<<"\n"<<fixed<<setprecision(2)<<m01<<" moeda(s) de R$ 0.01"<<endl;

return 0;
}
