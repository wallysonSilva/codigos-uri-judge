#include <iostream>
using namespace std;

int main(){
    int x, n, soma(0);
    cin>>x>>n;
    while(n<=0){
        cin>>n;
    }
    for(int i=0; i<=(n-1); i++){
        soma+=(x+i);
    }
    cout<<soma<<endl;

return 0;
}
