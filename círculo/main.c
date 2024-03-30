#include <stdio.h>
#include "circulo.h"

int main(){
    Circulo c = circ_cria(5, 2, 10);
    Circulo d = circ_cria(3, 2, 5);
    float area = circ_area(&c);
    int concentricos = circ_concentricos(&c, &d);
    float raiod = circ_raio(&d);
    printf("%f\n", area);
    printf("%d\n", concentricos);
    printf("%f\n", raiod);
    circ_libera(&c);

    return 0;
}