/* Realiza un programa que al recibir diferentes coordenadas de un 
plano cartesiano, indique  el cuadrante donde se ubica dicha coordenada */

#include <iostream>

using namespace std;

//Coordenadas en el plano cartesiano
struct Coordenada{
    float x;
    float y;
}C;

int main(){
    // Variable para saber el numero de coordenadas que se desea ingresar
    int numCoord;


    cout << "Inserte la cantidad de coordenadas que quiere insertar" << endl;
    cin >> numCoord;

    // Se crea un arreglo para la estructura con el tamaño basado en la cantidad de coordenadas que ingreso el usuario
    Coordenada ejes[numCoord];

    // Se le pide y guarda los valores de x,y en el arreglo n cantidad de veces con la sentencia for
    for(int i; i<numCoord; i++){
        
        
        cout << "Ingrese la coordenada X " << i+1 << ": ";
        cin >> ejes[i].x;

        cout << "Ingrese la coordenada Y " << i+1 << ": ";
        cin >> ejes[i].y;
    }

    // Por cada coordenada se le dice al usuario en cual cuadrante se encuentra
    for(int i; i<numCoord; i++){
        if(ejes[i].x>0 && ejes[i].y>0){
            cout << "la coordenada " << i << " esta en el cuadrante 1" << endl;
        }
        else if(ejes[i].x<0 && ejes[i].y>0){
            cout << "la coordenada " << i << " esta en el cuadrante 2" << endl;
        }
        else if(ejes[i].x<0 && ejes[i].y<0){
            cout << "la coordenada " << i << " esta en el cuadrante 3" << endl;
        }
        else if(ejes[i].x>0 && ejes[i].y<0){
            cout << "la coordenada " << i << " esta en el cuadrante 4" << endl;
        }
        else{
            cout << "la coordenada " << i  << " no pertenece a ninguno de los cuadrantes" << endl;
        }
    }

    /* Con el mismo programa, evaluar cuales de las coordenadas dadas pertenece a la misma linea dentro del plano cartesiano 
    (imprimir la ecuacion) */

    for(int i; i < numCoord; i++){

        float fx = ejes[i].x + 1;

        if(ejes[i].y == fx){
            cout << "La coordenada: " << ejes[i].x << "," << ejes[i].y << " pertenece a la ecuacion f(x)= x+1" << endl;
        }
        else{
            cout << "La coordenada: " << ejes[i].x << "," << ejes[i].y << " no pertenece a la ecuacion f(x)= x+1" << endl;
        }
    }
}

