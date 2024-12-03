
#include <stdio.h>

int InverterNumero(int numero)
{
    int invertido = 0, resto=0;

    while(numero!=0)
    {
        resto = numero % 10; /* Faz o resto da divisão por 10*/
        invertido = invertido * 10 + resto; /* Multiplica o número anterior por 10 e soma ao resto */
        numero /= 10; /* Divide por 10 e trunca o decimal*/
    }
    return invertido;
}

int main()
{
    int numero, numeroInvertido;

    printf("Digite um numero de três digitos: \n");
    scanf("%d", &numero);

    if (numero>=100 && numero<=999)
    {
        numeroInvertido = InverterNumero(numero);

        printf("O numero invertido é: %d\n", numeroInvertido);

    }

    else
    {
        printf("Número Inválido, digite um número entre 100 e 999!\n");
    }

return 0;
}