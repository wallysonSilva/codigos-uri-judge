#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float a, b, c, maior, meio, menor;
    cin>>a>>b>>c;
    //colocando os valores em ordem decrescente
    if(a>=b && a>=c){
        maior=a;
        if(b>=c){
            menor=c;
            meio=b;
        }
        else{
            menor=b;
            meio=c;
        }
    }
    else if(b>=a && b>=c){
        maior=b;
        if(a>=c){
            menor=c;
            meio=a;
        }
        else{
            menor=a;
            meio=c;
        }
    }
    else {
        maior=c;
        if(a>=b){
            menor=b;
            meio=a;
        }
        else{
            menor=a;
            meio=b;
        }
    }
    //fazendo checagem do tipo do triangulo
    if( !((abs(b-c) < a && a < b+c) &&  (abs(a-c) < b && b < a+c)  &&  (abs(a-b) < c && c < b+a))){
        cout<<"NAO FORMA TRIANGULO"<<endl;
    }
    else{
        if (  pow(maior, 2) == (pow(meio, 2) + pow(menor, 2) ) ) {
            cout<<"TRIANGULO RETANGULO"<<endl;
        }
        if (  pow(maior, 2) > ( pow(meio, 2) + pow(menor, 2) ) ) {
            cout<<"TRIANGULO OBTUSANGULO"<<endl;
        }
        if (  pow(maior, 2) < ( pow(meio, 2) + pow(menor, 2) ) ) {
            cout<<"TRIANGULO ACUTANGULO"<<endl;
        }
        if ( maior==meio && maior==menor ) {
            cout<<"TRIANGULO EQUILATERO"<<endl;
        }
        if ( (maior==meio && maior!=menor) || (meio==menor && meio!=maior) ){
            cout<<"TRIANGULO ISOSCELES"<<endl;
        }
    }
return 0;
}
