#include <iostream>
using namespace std;

int main(){
    int x, soma, cont;
    cin>>x;

    while(x!=0){
        soma=0; cont=0;
        for( int y=5; y>cont; x++){
            if((x%2)==0){
                soma+=x;
                cont++;
            }
        }
        cout<<soma<<endl;
        cin>>x;
    }
return 0;
}
