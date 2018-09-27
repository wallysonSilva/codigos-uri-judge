#include <iostream>
#include <string>
using namespace std;

int main(){
    int x, y, maior;
    string res;
    cin>>x>>y;
    while(x!=y){
        if(x>y){
            res="Decrescente";
        }
        else{
            res="Crescente";
        }
        cout<<res<<endl;
        cin>>x>>y;
    }

return 0;
}
