#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout<<fixed<<setprecision(1);
    float n1, n2, n3, n4, media, nexa;
    cin>>n1>>n2>>n3>>n4;
    cout<<"Media: "<<(media=(n1*2+n2*3+n3*4+n4*1)/10)<<endl;
    if(media>=7.0){
        cout<<"Aluno aprovado."<<endl;
    }
    else if(media<5.0){
        cout<<"Aluno reprovado."<<endl;
    }
    else{
        cout<<"Aluno em exame."<<endl;
        cin>>nexa;
        cout<<"Nota do exame: "<<nexa<<endl;
        media=(media+nexa)/2;
        if(media>5.0){
            cout<<"Aluno aprovado."<<endl;
        }
        else{
            cout<<"Aluno reprovado."<<endl;
        }
        cout<<"Media final: "<<media<<endl;
    }
return 0;
}
