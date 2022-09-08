/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
//prototipos (ssinatura)
int somarValores(int, int);
void mensagem();
float calcularSalario(int percentual, double salario);

//Funções
int main(){
    float salario = 153.36;
    int idade = somarValores(salario, 13);
    mensagem();
    printf("\n23+5 = %d", somarValores(idade, 5));
    return 0;
}

void mensagem(){
    printf("\nOlá Mundo!");
}

int somarValores(int x, int y){
    return x+y;
}

float calcularSalario(int percentual, double salario){
    if (salario > 5000) {
        salario = salario * percentual / 100;
    }
    return(float) salario;
}

