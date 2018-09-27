#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int cont=0, i=1, j=2, y=3; cont<n; cont++, i+=4, j+=4, y+=4){
        cout<<i<<" "<<j<<" "<<y<<" "<<"PUM"<<endl;
    }
return 0;
}
