#include <stdio.h>
#include <math.h>


#define Pi 3.1415

int main(){

    double raio, area;

    printf("Digite o raio do Círculo: ");
    scanf("%lf", &raio);

    area = Pi*pow(raio,2);

    printf(" A àreaa do Círculo é: %.2lf",area);

    return 0;

}