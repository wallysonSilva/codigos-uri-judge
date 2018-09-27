#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
    int mes;
    string mystr, meses[12]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    getline (cin, mystr);
    stringstream(mystr)>>mes;
    for (int i=0; i<12; i++){
        if(mes==i+1){
            cout<<meses[i]<<endl;
            break;
        }
    }
return 0;
}
