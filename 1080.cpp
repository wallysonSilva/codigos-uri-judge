#include <iostream>
using namespace std;

int main(){
    int TAM=100, n[TAM], maior, posic=0;
    for(int i=0; i<TAM; i++){
        cin>>n[i];
    }
    maior=n[0];
    for(int i=0; i<TAM; i++){
        if(n[i]>maior){
            maior=n[i];
            posic=i;
        }
    }
    cout<<maior<<'\n'<<(posic+1)<<endl;

return 0;
}
