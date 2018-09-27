#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<fixed<<setprecision(1);
    float media[n], nt[3];
    for(int i=0; i<n; i++){
        for(int y=0; y<3; y++){
            cin>>nt[y];
        }
        media[i]= ((nt[0]*2 + nt[1]*3 + nt[2]*5)/10);
    }
    for(int i=0; i<n; i++){
        cout<<media[i]<<endl;
    }
return 0;
}
