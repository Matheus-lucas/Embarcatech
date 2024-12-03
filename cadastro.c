#include <stdio.h>
#include <math.h>

#include <string.h> /* trabalhar com strings*/

struct Aluno{
    char name[50];
    int idade;
    float altura;
    float notas[3];
    float media;
};

int main(){

    float media = 0.0;
    
    struct Aluno aluno;

    printf("Digite o nome do Aluno: ");
    fgets(aluno.name, 100, stdin); /* stdin indica a leitura da entrada padrão do computador(por padrão, o tecladod)*/

    printf("Digite a idade do aluno: ");
    scanf("%d", &aluno.idade);

    printf("Digite a Altura do aluno: ");
    scanf("%f", &aluno.altura);

    printf("Digite as Notas do Aluno:");

    for(int i=0;i<=2;i++)
    {
        printf("\n");
        printf("Digite a %dª do Aluno: ", i+1);
        scanf("%f", &aluno.notas[i]);
        
    }
    

    printf("Dados do Aluno \nNome: %s \nIdade: %d \nAltura: %.2f \nNotas: %.2f \t %.2f \t %.2f\n", 
    aluno.name, aluno.idade, aluno.altura, aluno.notas[0],aluno.notas[1],aluno.notas[2]);

    media = (aluno.notas[0]+aluno.notas[1]+aluno.notas[2])/3;

    printf("Média do Aluno: %.2f", media);

    if(media>=7){
        printf("\nAluno Aprovado\n");
    }

    else{

        if((media>=4)&&(media<7))
        {
            printf("\nAluno em recuperação\n");
        }

        else{
            printf("\nAluno Reprovado\n");
        }
        
    }

return 0;

}