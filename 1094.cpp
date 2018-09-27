#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n, c=0, s=0, r=0;
    float total=0;
    cin>>n;
    int quant_cob[n];
    char tipo_cob[n];

    for(int i=0; i<n; i++){
        cin>>quant_cob[i]>>tipo_cob[i];
    }

    for(int i=0; i<n; i++){
        total+=quant_cob[i];
        if(tipo_cob[i]=='S'){
            s+=quant_cob[i];
        }
        else if(tipo_cob[i]=='R'){
            r+=quant_cob[i];
        }
        else if(tipo_cob[i]=='C'){
            c+=quant_cob[i];
        }
    }
    cout<<"Total: "<<total<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<c<<endl;
    cout<<"Total de ratos: "<<r<<endl;
    cout<<"Total de sapos: "<<s<<endl;
    cout<<"Percentual de coelhos: "<<fixed<<setprecision(2)<<((c*100)/total)<<" %"<<endl;
    cout<<"Percentual de ratos: "<<fixed<<setprecision(2)<<((r*100)/total)<<" %"<<endl;
    cout<<"Percentual de sapos: "<<fixed<<setprecision(2)<<((s*100)/total)<<" %"<<endl;
return 0;
}
