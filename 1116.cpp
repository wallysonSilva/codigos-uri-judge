#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double n, x, y;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x>>y;
        if(y!=0){
            cout<<fixed<<setprecision(1)<<(x/y)<<endl;
        }
        else{
            cout<<"divisao impossivel"<<endl;
        }
    }

return 0;
}
