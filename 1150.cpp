#include <iostream>
using namespace std;

int main(){
    int x, z, conta=0, soma=0;
    cin>>x;
    cin>>z;
    while(z<=x){
        cin>>z;
    }

    for(int i=x; i<=z; i++){
        conta++;
        soma+=i;
        if(soma>z){
            i=z+1;
        }
    }
    cout<<conta<<endl;
return 0;
}
