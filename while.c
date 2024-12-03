#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero=1, soma = 0;

    printf("Digite os números serem somados, digite 0 para parar\n");

    while(numero!=0){

        numero =1;
        printf("Digite o número: ");
        scanf("%d", &numero);    
        soma+=numero;

        }
    printf("A soma foi: %i", soma);
}