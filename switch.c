#include <stdio.h>

int main(){

    int voto;

    printf("DIgite seu voto: \n");
    scanf("%d", &voto);

    switch(voto){

        case 0:
            printf("Seu voto foi 0\n");
            break;

        case 1:
            printf("Seu voto foi 1\n");
            break;

        case 2:
            printf("Seu voto foi 2\n");
            break;

        default:
            printf("Voto Inválido\n");
    }
}