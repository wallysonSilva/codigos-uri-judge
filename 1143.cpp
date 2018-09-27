#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n>1 && n<1000){
        for(int cont=0, i=1; cont<n; cont++, i++){
            cout<<i<<" "<<(i*i)<<" "<<((i*i)*i)<<endl;
        }
    }

return 0;
}
