#include <stdio.h>

void main() {

    float kpan;
    float gpan;

    printf("Cuantos kilos de pan llevas?");
    scanf ("%f", &kpan);

    gpan = kpan * 1000;

    printf("Es decir, compras %f gramos", gpan);
}