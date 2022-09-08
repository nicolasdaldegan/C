#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

//prototipos (assinatura)
void menu();
int receberValorInt();
void receberValorReal(float *valor);
float recebeSalario(float salario);
float vetoReal(float *vetor, int tamanho);

//função main
int main(){
    menu();
    return 0;
}

//função menu 1
void menu(){
    char alternativa;
    while(alternativa != 'B'){
        printf("\nA - Resultado do exercicio 05\nB - Finalizar: ");
        scanf(" %c", &alternativa);
        alternativa = toupper(alternativa);
        if (alternativa == 'A'){
            int tamanho = receberValorInt();
            float *vetor = (float *)calloc(tamanho,sizeof(float));
            float media = vetoReal(vetor, tamanho);
            printf("\nA media dos salarios é %.2f", media);
        }
        else if (alternativa == 'B'){
            printf("\nPrograma Finalizado!");
            break;
        }
    }
}


//recebe valor inteiro 2
int receberValorInt(){
    int num;
    do{
         printf("\nDigite o tamanho do vetor: ");
         scanf(" %d", &num);
         if(num<=0){
              printf("\nNúmero invalido, digite novamente ");
         }
    }while(num<=0);
    return num;
}


//função recebe número real 3
void receberValorReal(float *valor){
    do{
         printf("\nDigite um número inteiro real positivo para o SALARIO: ");
         scanf(" %f", valor);
         if(*valor<=0){
              printf("\nNúmero invalido, digite novamente ");
         }
    }while(*valor<=0);
}


//função recebe salario 4
float recebeSalario(float salario){
    if(salario <= 1500){
        salario *= 1.1;
    }else if(salario <= 5000){
        salario *= 1.05;
    }
    return salario;
}

//função que receba um vetor via parametro 5
float vetoReal(float *vetor, int tamanho){
    float salarioTotal = 0;
    float mediaSal = 0;
    for(int i = 0; i<tamanho; i++){
        receberValorReal(vetor);
        *vetor = recebeSalario(*vetor);
        salarioTotal += *vetor;
        vetor++;
    }
    mediaSal = salarioTotal / tamanho;
    return mediaSal;
}
