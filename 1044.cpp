#include <iostream>
using namespace std;

int main(){
    int A, B, maior, menor;
    cin>>A>>B;
    if(A>=B){
        maior=A;
        menor=B;
    }
    else {
        maior=B;
        menor=A;
    }
    if(maior%menor==0){
        cout<<"Sao Multiplos"<<endl;
    }
    else{
        cout<<"Nao sao Multiplos"<<endl;
    }
return 0;
}
