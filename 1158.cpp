#include <iostream>
using namespace std;

int main(){
    int n, x, y, soma(0), cont(0);
    cin>>n;

    for(int i=0; i<n; i++){
        soma=0; cont=0;
        cin>>x>>y;

        for( ; y>cont; x++){
            if((x%2)!=0){
                soma+=x;
                cont++;
            }
        }
        cout<<soma<<endl;
    }
return 0;
}
