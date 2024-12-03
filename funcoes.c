#include <stdio.h>

float multiplicar(int a, int b){
    return a*b;
}

int somar(int a, int b){
    return a+b;
}

float dividir(float a, float b){
    return (a/b);
}

int subtrair(int a, int b){
    return a-b;
}

int main()
{
    int a=0, b =0;
    int soma=0, sub = 0;
    float res=0.0, mult=0.0;

    printf("Digite o 1º número: \n");
    scanf("%d", &a);

    printf("Digite o 2º número: \n");
    scanf("%d",&b);

    soma = somar(a,b);
    sub = subtrair(a,b);
    mult=multiplicar(a,b);
    res = dividir(a,b);


    printf("A soma dos números é: %d\n", soma);
    printf("A subtração dos números é: %d\n", sub);
    printf("A multiplicação dos números é: %.2f\n", mult);
    printf("A divisão dos números é: %.2f\n", res);
    
}