#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int *x;
    x = (int*) malloc (sizeof(int)); // o int* é para indicar que a variavel que ele ta apontando vai ser int
    return 0;
    printf("\nConteudo do ponteiro x %p. Endereço de x %p",x, &x);
    *x=50;
    printf("\nConteudo da apontada por x %i", *x);*/
    
    //alocação de vetor de char32
    /*char *c;
    c = (char*) malloc(3); // o malloc é para armazenar uma variável dinâmica na heap, que será editada pelo seu ponteiro, e para apontar o ponteiro para essa variável, faz o x = (tipo da variável*) malloc(número de bytes da variável);
    for(int i=1; i<=3; i++){ //aritmetica de ponteiros
        *c = 'A' +i; // quando se soma um número num char ele soma na tabela asci, passando de A para B
        printf("\nConteudo da apontada %c e o conteudo do ponteiro %p",*c, c);
        c++;
    }*/
    
    //alocar 5 double
    double *y = (double*) malloc (5 * (sizeof(double)));
    
    for(int i=0; i<5; i++){ //indexação do ponteiro
        y[i] = 10.14 * i;
        printf("\nConteudo da apontada %.2lf e o conteudo do ponteiro %p",y[i], &y[i]);
        
    }
    
    //alocar 3 float
    float *px = (float*) calloc (3, sizeof(float));
    for(int i=1; i<=3; i++){
        *px = 34.8; // com aritmetica de ponteiros, vc mexe no ponteiro, com indexação o ponteiro não mexe, apenas o indice dele
        printf("\nConteudo da apontada %f e o conteudo do ponteiro %p",*px, px);
        px++;
    }
    px-=3;
    
    //liberar os espaços de memória
    free(x);
    free(c);
    free(y);
    free(px);
}

