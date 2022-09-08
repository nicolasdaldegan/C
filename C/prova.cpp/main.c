#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    //Declaração de variáveis
    int quantAlunos=0;
    int *notas;
    float mediaNotas=0;
    float notasTotal=0;
    int contAprovados=0;
    int maiorNota=0;
    char nomeAlunos[100];
    char nomeMaior[100];

    //Solicita Alunos.
    do
    {
        printf("\nDigite a quantidade de Alunos da Turma: ");
        scanf("%i", &quantAlunos);

        if (quantAlunos <= 0)
        {
            printf("\nValor inválido.");
        }

    } while (quantAlunos <= 0);

    //notas controle
    notas = (int *)malloc(quantAlunos * sizeof(int)); //deixa lixo de memória.
    for (int i = 0; i < quantAlunos; i++)
    {
        do
        { 
            printf("\nDigite o nome do aluno: ");
            scanf(" %[^\n]", nomeAlunos);

                nomeAlunos[0] = toupper(nomeAlunos[0]);
                
            do{
                printf("\nDigite a nota do aluno: ");
                scanf(" %i", notas);
                notasTotal += *notas;
                
                //validar salario
                if (*notas > 100 && *notas < 0)
                {
                    printf("\nValor invalido, sera aceito somente um valor de 0 a 100");
                }

            }while(*notas > 100 && *notas < 0);
            
            //controle notas
            if (*notas <= 20)
            {
                printf("\nNome do aluno %s e a sua nota é %i \n",nomeAlunos, *notas);
                printf("\nReprovado");
            }
            else if (*notas <= 59)
            {
                printf("\nNome do aluno %s e a sua nota é %i \n",nomeAlunos, *notas);
                printf("\nVocê esta de prova especial");
            }
            else
            {
                printf("\nNome do aluno %s e a sua nota é %i \n",nomeAlunos, *notas);
                printf("\nAprovado");
                contAprovados++;
            }
            
            if(*notas > maiorNota){
                maiorNota = *notas;
                strcpy(nomeMaior, nomeAlunos);
            }

        } while (*notas > 100 && *notas < 0);
        notas++;
    }
    
    notas -= quantAlunos;
    mediaNotas = notasTotal / quantAlunos;
    
    for(int i = 0; i<quantAlunos; i++){
        printf("\nA %i nota: %i",i+1, notas[i]);    
    }
    
    printf("\nA media das notas é %.2lf", mediaNotas);
    printf("\nO aluno %s tem a maior nota %i",nomeMaior, maiorNota);
    printf("\nA quantidade de alunos que ficaram acima da media foi %i", contAprovados);
    
    free(notas);
    return 0;
}

