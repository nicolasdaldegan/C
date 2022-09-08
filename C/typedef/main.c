#include <stdio.h>

//Primeiro tipo
typedef int inteiro;
typedef int inteiro2[4];
typedef int* inteiro3;

//prototipos
inteiro somarValores(inteiro x, inteiro y);

int main(){
    //utilizacao do tipo inteiro
    inteiro num = somarValores(23, 87);
    printf("\nO valor da variavel num é %i", num);
    
    //utilizacao do tipo inteiro2
    inteiro2 x;
    for(int i = 0; i < 4; i++){
        x[i] = somarValores(i, 10);
        printf("\nx[%i] = %i", i, x[i]);
    }
    
    //utilizacao do tipo inteiro3
    inteiro3 pont = &num;
    *pont = 10;
    printf("\nO endereco é %p", pont);
    printf("\nO valor da variavel %p", pont);
    
    return 0;
}

inteiro somarValores(inteiro x, inteiro y){
    return x + y;
}