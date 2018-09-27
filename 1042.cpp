#include <iostream>
using namespace std;

int main(){
    int vetor1[3], vetor2[3], vet_aux[3], menor, maior, posicao, n;
    for(int i=0; i<3; i++){
        cin>>n;
        vetor1[i]=n;
        vetor2[i]=n;
    }

    maior=vetor1[0];
    for(int i=0; i<3; i++){
        if(vetor1[i]>maior){
            maior=vetor1[i];
        }
    }
    for(int y=0; y<3; y++){
        menor=vetor1[0];
        for(int i=0; i<3; i++){
            if(vetor1[i]<=menor){
                menor=vetor1[i];
                posicao=i;
            }
        }
        vet_aux[y]=menor;
        vetor1[posicao]=(maior+1);
    }
    for(int y=0; y<3; y++){
        cout<<vet_aux[y]<<endl;
    }
    cout<<endl;
    for(int y=0; y<3; y++){
        cout<<vetor2[y]<<endl;
    }
return 0;
}
