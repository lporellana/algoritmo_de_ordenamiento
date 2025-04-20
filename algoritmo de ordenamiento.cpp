#include <iostream>
#include <vector> // Librería para usar vectores

using namespace std;
bool hubo_intercambio = true; /// se usará para el bucle while, covertida en respuesta de si o no 

int main(){

    vector<int> lista = {3, 5, 17, 2, 9, 8, 23, 7, 11}; // Vector de enteros a ordenar y poder usar las funciones de la librería vector

    while (hubo_intercambio){
        hubo_intercambio = false;
            for (int i = 0; i < lista.size()-1; i++){
                int a = lista[i];
                int b = lista[i+1];

                if(a>b){
                    lista[i] = b;
                    lista[i+1] = a;
                    hubo_intercambio = true;
                }            
            }
        }
    cout << "Lista ordenada: " << endl;
    for (int i = 0; i < lista.size(); i++){
        cout << lista[i] << ", "; 
    }    
    }
