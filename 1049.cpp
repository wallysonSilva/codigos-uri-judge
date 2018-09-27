#include <iostream>
#include <string>
using namespace std;

int main(){
    string pal1, pal2, pal3;
    getline(cin, pal1);
    getline(cin, pal2);
    getline(cin, pal3);

    if(pal1=="vertebrado"){
        if(pal2=="ave"){
            if(pal3=="carnivoro"){
                cout<<"aguia"<<endl;
            }
            else if(pal3=="onivoro"){
                cout<<"pomba"<<endl;
            }
        }
        else if(pal2=="mamifero"){
            if(pal3=="onivoro"){
                cout<<"homem"<<endl;
            }
            else if(pal3=="herbivoro"){
                cout<<"vaca"<<endl;
            }
        }
    }

    if(pal1=="invertebrado"){
        if(pal2=="inseto"){
            if(pal3=="hematofago"){
                cout<<"pulga"<<endl;
            }
            else if(pal3=="herbivoro"){
                cout<<"lagarta"<<endl;
            }
        }
        else if(pal2=="anelideo"){
            if(pal3=="hematofago"){
                cout<<"sanguessuga"<<endl;
            }
            else if(pal3=="onivoro"){
                cout<<"minhoca"<<endl;
            }
        }
    }
return 0;
}
