#include <iostream>
using namespace std;

int main(){
    int val, pares=0;
    for(int i=0; i<5; i++){
        cin>>val;
        if((val%2)==0){
            pares++;
        }
    }
    cout<<pares<<" valores pares"<<endl;
return 0;
}
