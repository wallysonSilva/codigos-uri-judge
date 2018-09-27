#include <iostream>
using namespace std;

int main(){
    int quant, x;
    cin>>quant;
    int guarda[quant];

    for(int i=0; i<quant; i++){
        cin>>guarda[i];
    }

    for(int i=0; i<quant; i++){

        if( guarda[i]!=0 && (guarda[i]%2)==0){
            cout<<"EVEN";
        }
        else if((guarda[i]%2)!=0){
            cout<<"ODD";
        }

        if(guarda[i]>=0){
            if(guarda[i]==0)
                cout<<"NULL"<<endl;
            else
                cout<<" POSITIVE"<<endl;
        }
        else if(guarda[i]<0){
            cout<<" NEGATIVE"<<endl;
        }
    }
return 0;
}
