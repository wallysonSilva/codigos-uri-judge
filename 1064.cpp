#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    float ent, posi=0, soma=0;
    for(int i=0; i<6; i++){
        cin>>ent;
        if(ent>0){
            posi++;
            soma+=ent;
        }
    }
    cout<<posi<<" valores positivos\n"<<fixed<<setprecision(1)<<(soma/posi)<<endl;

return 0;
}
