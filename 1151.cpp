#include <iostream>
using namespace std;

int main(){
    int n, soma(0);
    cin>>n;
    if(n>0 && n<46){
        int vet[n];
        vet[0]=0; vet[1]=1;
        cout<<vet[0]<<" "<<vet[1];
        for(int i=2; i<n; i++){
            vet[i]=vet[i-2]+vet[i-1];
            if(i==2){
               cout<<" ";
            }
            cout<<vet[i];
            if(i<n-1){
                cout<<" ";
            }
        }
        cout<<endl;
    }

return 0;
}
