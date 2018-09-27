#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    //imprimindo a coluna 1
    if(n>1 && n<1000){
        int cl11[n*2], cl12[n*2], cl21[n*2], cl22[n*2], cl31[n*3], cl32[n*3];
        for(int i=0, j=0; i<n; i++, j++){
            cl11[i]=i+1;
            cl12[j]=j+1;
        }
        //imprimindo a coluna 2
        for(int i=0, j=0; i<n; i++, j++){
            cl21[i]=(cl11[i])*(cl11[i]);
            cl22[j]=(cl21[i])+1;
        }
        //imprimindo a coluna 3
        for(int i=0, j=0; i<n; i++, j++){
            cl31[i]=(cl11[i])*(cl21[i]);
            cl32[j]=(cl31[i])+1;
        }
        //imprimindo o resultado
        for(int i=0, j=0; i<n; i++, j++){
            cout<<cl11[i]<<" "<<cl21[i]<<" "<<cl31[i]<<endl;
            cout<<cl12[j]<<" "<<cl22[j]<<" "<<cl32[j]<<endl;
        }
    }
return 0;
}
