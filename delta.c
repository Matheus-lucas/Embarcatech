#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(void) 
{
    double a,b,c,delta;
    
    printf("Digite os coeficientes da Função: ");
    scanf("%lf,%lf,%lf", &a, &b, &c);
    
    delta = pow(b,2)-4*a*c;
    
    if (delta < 0)
    {
        printf("Equação não possui raízes reais");
    }
    
    else
    {
        printf("O valor de delta é: %.2lf \n", delta);
    }

return 0;
    
}