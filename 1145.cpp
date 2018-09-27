#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int x, y, cont=0;
    cin>>x>>y;
    int vet[y];

    for(int i=0; i<y; i++){
        cont++;
        cout<<(vet[i]=(i+1));
        if(cont==x){
            cout<<endl;
            cont=0;
        }
        if(cont!=x && cont!=0 && i<(y-1)){
            cout<<" ";
        }
    }
return 0;
}
