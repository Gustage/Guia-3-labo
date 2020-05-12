#include <iostream>
#include <math.h>
using namespace std;
int main (){
    float radio_circulo, area_circulo, perimetro_circulo;
    cout<<"introduce radio del circulo";
    cin>>"radio _circulo";
    area_circulo=(3.14*radio_circulo*radio_circulo) /4;
    cout<<"el area del circulo es"<<area_circulo<<" ";
    perimetro_circulo= (2*3.14*radio_circulo);
    cout<<"el perimetro del circulo es"<<perimetro_circulo<< " ";
}