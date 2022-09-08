/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.
******************************************************************************/

#include<stdio.h>
#define MAX 75
#include <ctype.h>
#include <string.h>

//sempre lembrar de colocar para o codigo rodar
/*prototipos
void maiusculo(char *string, int i);
*/

void maiusculo(char *string);

char* Inversao(char str1[]){
    static int i=0;
    static char str_inv[MAX];
    if(*str1){
         Inversao(str1+1);
         str_inv[i++] = *str1;
    }
    return (str_inv);
}

//funcao para tranformar em ToUpperCase com aritmética
void maiusculo(char *string){
if(*string){ //caso recursivo pode fazer tbm if(*string != '\0')
	*string = toupper(*string);
	maiusculo(string+1);
	}
}

//recursividade de calda não deixa mada para tras, sempre a ultima linha vai ser a propia função, agora comum pode deixar
/* funcao para tranformar em ToUperCase com indice
void maiusculo(char *string, int i){
	if(string[i]){ //if (string[i] != '\0')
	string[i] = toupper(string[i]);
	maiusculo(string, i+1);
	}
}
*/

int main(){
    char *str_invertida ,string1[MAX];
    int iguais;
 
    printf("\n Insira uma string: ");
    scanf("%s",string1);
   
    //transformando em maiusculo pela função
    maiusculo(string1);
   
    //scanf é ruim
    //melhor usar fgets(string, 50, stdin);
    //gets(string); tbm é boa mas tem vazamento

    str_invertida = Inversao(string1);
   
    //strcmpi verifica a quantidade de palavras diferentes
    iguais = strcmp(string1, str_invertida);
   
    printf("\n A string invertida eh: %s\n",str_invertida);
    
    //compara
    if(iguais == 0){
    	printf("E um palindromo!");
	}else{
		printf("Nao e palindromo!");
	}
 	return 0;
}