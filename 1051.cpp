#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float sal, sal_aux, imp=0;
    cout<<fixed<<setprecision(2);
    cin>>sal_aux;
    sal=sal_aux;
    if (sal>=00.00 && sal<=2000.00){
        imp=0;
        sal-=2000.00;
    }

    if(sal>0){
        if(sal<=1000){
            imp=imp+(sal*0.08);
        }
        else if(sal>1000){
            imp=imp+(1000*0.08);
        }
        sal-=1000;
    }

    if(sal>0){
        if(sal<=1500){
            imp+=(sal*0.18);
        }
        else if(sal>1500){
            imp+=(1500*0.18);
        }
        sal-=1500;
    }

    if(sal>0){
        imp+=sal*0.28;
    }

    if(imp>0){
     cout<<"R$ "<<imp<<endl;
    }
    else{
     cout<<"Isento"<<endl;
    }
return 0;
}
