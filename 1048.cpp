#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float sal;
    cout<<fixed<<setprecision(2);
    cin>>sal;
    if(sal>= 0 && sal <=400.00){
        cout<<"Novo salario: "<<(sal*1.15)<<"\nReajuste ganho: "<<(sal*0.15)<<"\nEm percentual: 15 %"<<endl;
    }
     else if(sal>= 400.01 && sal <=800.00){
       cout<<"Novo salario: "<<(sal*1.12)<<"\nReajuste ganho: "<<(sal*0.12)<<"\nEm percentual: 12 %"<<endl;
    }
    else if(sal>= 800.01 && sal <=1200.00){
        cout<<"Novo salario: "<<(sal*1.10)<<"\nReajuste ganho: "<<(sal*0.10)<<"\nEm percentual: 10 %"<<endl;
    }
    else if(sal>= 1200.01 && sal <=2000.00){
        cout<<"Novo salario: "<<(sal*1.07)<<"\nReajuste ganho: "<<(sal*0.07)<<"\nEm percentual: 7 %"<<endl;
    }
    else{
        cout<<"Novo salario: "<<(sal*1.04)<<"\nReajuste ganho: "<<(sal*0.04)<<"\nEm percentual: 4 %"<<endl;
    }

return 0;
}
