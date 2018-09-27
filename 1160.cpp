#include <iostream>
using namespace std;

int main(){
    int T, PA, PB, tempo(0);
    double G1, G2;
    cin>>T;
    if(T>=1 && T<=3000){
        for(int i=0; i<T; i++){
            tempo=0;
            cin>>PA>>PB;
            if((PA>=100 && PA<=1000000) && (PB>=PA && PB<=1000000)){
                cin>>G1>>G2;
                if((G1>=0.1 && G1<=10.0) && (G2>=0.0 && G2<=10.0) && (G2<G1)){
                    while(PA<=PB){
                        tempo++;
                        PA+=((PA*G1)/100.0);
                        PB+=((PB*G2)/100.0);
                    }
                     //impressão do resultado
                     if(tempo<=100){
                        cout<<tempo<<" anos."<<endl;
                    }
                    else if(tempo>100){
                        cout<<"Mais de 1 seculo."<<endl;
                    }
                }
            }
        }
    }
return 0;
}
