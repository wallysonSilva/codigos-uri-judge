#include <iostream>
using namespace std;

int main(){
    int m, n, maior, menor, soma;
    cin>>m>>n;
    while(m>0 && n>0){
        soma=0;
        if(m>=n){
            maior=m;
            menor=n;
        }
        else{
            maior=n;
            menor=m;
        }

        for(int i=menor; i<=maior; i++){
            cout<<i<<" ";
            soma+=i;
        }
        cout<<"Sum="<<soma<<endl;
        cin>>m>>n;
    }
return 0;
}
