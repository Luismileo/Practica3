/* Realizar un programa que dado los limites de un cuadrante, y un arreglo de putnos indique la distancia maxima encontrada entre 
dos puntos del arreglo dentro de los limites del cuadrante */

/* imprimir para un solo punto del arreglo, las distancisa a cada punto dentro del arreglo.
(dentro del mismo cuadrante)*/

#include <iostream>
#include <cmath>

using namespace std;

//Coordenadas en el plano cartesiano
struct Coordenada{
    float x;
    float y;
};

int main(){
    int numCoord =0;
    float distanciaMax = 0;
    float distancia = 0;
    int punto1 = 0;
    int punto2 = 0;

    cout << "Inserte la cantidad de coordenadas que quiere insertar" << endl;
    cin >> numCoord;

    // Se crea un arreglo para la estructura con el tamaño basado en la cantidad de coordenadas que ingreso el usuario
    Coordenada ejes[numCoord];

    // Se le pide y guarda los valores de x,y en el arreglo n cantidad de veces con la sentencia for
    for(int i; i<numCoord; i++){
        
        
        cout << "Ingrese la coordenada X " << i << ": ";
        cin >> ejes[i].x;

        cout << "Ingrese la coordenada Y " << i << ": ";
        cin >> ejes[i].y;
    }

    cout << "Eliga un cuadrante como limite" << endl;
    cout << "1. Primer cuadrante" << endl;
    cout << "2. Segundo cuadrante" << endl;
    cout << "3. Tercer cuadrante" << endl;
    cout << "4. Cuarto cuadrante" << endl;
    int cuadrante;
    cin >> cuadrante;

    switch(cuadrante){
        case 1:
            for(int i; i<numCoord; i++){
                if(ejes[i].x>0 && ejes[i].y>0){
                    for(int j; j<numCoord; j++){
                        if(ejes[j].x>0 && ejes[j].y>0){
                            distancia = sqrt(pow(ejes[j].x - ejes[i].x,2) + pow(ejes[j].y - ejes[i].y,2));
                            if(distancia > distanciaMax){
                                distanciaMax = distancia;
                                punto1 = i;
                                punto2 = j;
                            }
                        }
                    }
                }
            }
        break;

        case 2:
            for(int i; i<numCoord; i++){
                if(ejes[i].x<0 && ejes[i].y>0){
                    for(int j; j<numCoord; j++){
                        if(ejes[j].x<0 && ejes[j].y>0){
                            distancia = sqrt(pow(ejes[j].x - ejes[i].x,2) + pow(ejes[j].y - ejes[i].y,2));
                            if(distancia > distanciaMax){
                                distanciaMax = distancia;
                                punto1 = i;
                                punto2 = j;
                            }
                        }
                    }
                }
            }
        break;

        case 3:
            for(int i; i<numCoord; i++){
                if(ejes[i].x<0 && ejes[i].y<0){
                    for(int j; j<numCoord; j++){
                        if(ejes[j].x<0 && ejes[j].y<0){
                            distancia = sqrt(pow(ejes[j].x - ejes[i].x,2) + pow(ejes[j].y - ejes[i].y,2));
                            if(distancia > distanciaMax){
                                distanciaMax = distancia;
                                punto1 = i;
                                punto2 = j;
                            }
                        }
                    }
                }
            }
        break;

        case 4:
            for(int i; i<numCoord; i++){
                if(ejes[i].x>0 && ejes[i].y<0){
                    for(int j; j<numCoord; j++){
                        if(ejes[j].x>0 && ejes[j].y<0){
                            distancia = sqrt(pow(ejes[j].x - ejes[i].x,2 ) + pow(ejes[j].y - ejes[i].y,2));
                            if(distancia > distanciaMax){
                                distanciaMax = distancia;
                                punto1 = i;
                                punto2 = j;
                            }
                        }
                    }
                }
            }
        break;

        default:
            cout << "No se eligio un cuadrante valido" << endl;
        return 1;
    }

    cout << "La distancia maxima entre los puntos " << punto1 << " y " << punto2 << " es: " << distanciaMax << endl;

    // Imprimir distancias desde un punto específico
    int punto;
    cout << "Ingrese el indice del punto para calcular distancias: ";
    cin >> punto;

    switch (cuadrante) {
        case 1:
            for (int i = 0; i < numCoord; i++) {
                if (i != punto && ejes[i].x > 0 && ejes[i].y > 0) {
                    distancia = sqrt(pow(ejes[i].x - ejes[punto].x, 2) + pow(ejes[i].y - ejes[punto].y, 2));
                    cout << "Distancia del punto " << punto << " al punto " << i << " es: " << distancia << endl;
                }
            }
        break;

        case 2:
            for (int i = 0; i < numCoord; i++) {
                if (i != punto && ejes[i].x < 0 && ejes[i].y > 0) {
                    distancia = sqrt(pow(ejes[i].x - ejes[punto].x, 2) + pow(ejes[i].y - ejes[punto].y, 2));
                    cout << "Distancia del punto " << punto << " al punto " << i << " es: " << distancia << endl;
                }
            }
        break;

        case 3:
            for (int i = 0; i < numCoord; i++) {
                if (i != punto && ejes[i].x < 0 && ejes[i].y < 0) {
                    distancia = sqrt(pow(ejes[i].x - ejes[punto].x, 2) + pow(ejes[i].y - ejes[punto].y, 2));
                    cout << "Distancia del punto " << punto << " al punto " << i << " es: " << distancia << endl;
                }
            }
        break;

        case 4:
            for (int i = 0; i < numCoord; i++) {
                if (i != punto && ejes[i].x > 0 && ejes[i].y < 0) {
                    distancia = sqrt(pow(ejes[i].x - ejes[punto].x, 2) + pow(ejes[i].y - ejes[punto].y, 2));
                    cout << "Distancia del punto " << punto << " al punto " << i << " es: " << distancia << endl;
                }
            }
        break;

        default:
            cout << "No se eligio un cuadrante valido" << endl;
        return 1;
    }

    return 0;
    
}