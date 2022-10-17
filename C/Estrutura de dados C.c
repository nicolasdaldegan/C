
#include <stdlib.h>
#include <stdio.h>
int main(){

    int funcionarios;
    char estudando = 's';
    float salarioTotal;
    float maior = -1;
    int pecasMaior;
    int pecasTotal;
    

    do{
        printf("\nDigite a quantidade de funcionarios que trabalha na fabrica:");
        scanf("%i", &funcionarios);

        if(funcionarios<=0){
            printf("\nNúmero de funcionarios invalidos, digite um valor positivo");
        }

    } while (funcionarios<=0);
    
    float *salario = (float*) calloc (funcionarios, sizeof(float));
    int *pecas = (int*) calloc (funcionarios, sizeof(int));
    
    int i=0;
    
    for(int i=0; i<funcionarios; i++){
        printf("\nDigite a quantidade de pecas fabricadas na posicao {%i}:", i);
        scanf("%i", pecas); // pra dar scan com aritmetica de ponteiro pra entrar no conteudo do ponteiro, voce cooca apenas o ponteiro, que o conteúdo dele é o endereço de memória da variável peças, quando se usa um scan, sempre se coloca o endereço de memória da variavel, mas nesse caso o ponteiro já tem o endereço de memória da variável.
        
        while(*pecas<0){ //aritmética de ponteiros, pega o conteudo do ponteiro pecas, que é o número de pelas e testa
            printf("\nNumero de pecas invalido, digite novamente");
            printf("\nDigite a quantidade de pecas fabricadas na posicao {%i}:", i);
            scanf("%i", pecas); // este while vai repetir até o valor ser positivo
        }
        
        
        do{
            printf("\nO funcionario %i estuda? (s/n)", i);
            scanf(" %c", &estudando);
            
            if(estudando!= 's' && estudando!= 'n'){
                printf("\nDigite o caracter correto!");
            }
        }while(estudando!= 's' && estudando!= 'n');
        
        
        
        if(*pecas<=200){
            *salario = *pecas * 2;
        }
        
        else if(*pecas<=400){ 
            *salario = *pecas * 2.30;
        }
        
        else if(*pecas>400){
            *salario = *pecas * 2.50;
        }
        
        if(estudando == 's'){ 
            *salario = *salario *1.1;
        }
        
        salarioTotal+= *salario;
        
        if(*salario>maior){
            maior = *salario;
            pecasMaior = *pecas;
        }
        pecas++; // avança para o proximo endereço de memória, pegando o outro funcionario
        salario++;
    }
    
    salario -= funcionarios; // retornando os endereços de memória para a primeira posição do vetor
    pecas -= funcionarios;
    
    for(int i = 0; i<funcionarios; i++){
        printf("\nFuncionario %i possui o Salario %.2lf e produziu %i pecas", i, salario[i], pecas[i]); 
    }
    printf("\nA soma dos salarios é %.2lf", salarioTotal); 
    printf("\nO maior salario é %.2lf, e produziu %i pecas", maior, pecasMaior);

    free(pecas);
    free(salario);
    
    return 0;
}



