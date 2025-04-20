#include <iostream>
#include <vector>

using namespace std;
int intercambio = 1;

int main(){
    //vector<int> lista= {};
    //vector<int> lista = {3, 5, 17, 2, 9, 8};

    vector<int> lista = {3, 5, 17, 2, 9, 8};

    for( int i = 1; intercambio!=0; i++){
        for (int j = 0; j < lista.size(); i++){
            int a = lista[i];
            int b = lista[i+1];
            int intercambio = 0;

            if(a>b){
                lista[i] = b;
                lista[i+1] = a;
                intercambio = 1;
            }

        }
    }
}