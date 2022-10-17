
#include<stdio.h>
#include <ctype.h>
#include <string.h>

void maiusculo(char *string);
void maiusculo2(char *string, int i);

char* Inversao(char str1[]){
    static int i=0;
    static char str_inv[50];
    if(*str1){
         Inversao(str1+1);
         str_inv[i++] = *str1;
    }
    return (str_inv);
}

int main(void)
{
    char *str_invertida;
    int iguais;
    char string[50];
    printf("\nDigite uma string: ");
    //fgets(string, 50, stdin);
    //gets(string);
    scanf("%[^\n]", string);
    
    str_invertida = Inversao(string);
    iguais = strcmp(string, str_invertida);
    printf("\n A string invertida eh: %s\n",str_invertida);
    
    
    if(iguais == 0){
        printf("E um palindromo!");
    }else{
        printf("Nao e palindromo!");
    }
   
    /*printf("\n%s - Essa é a string", string);
    maiusculo(string);
    printf("\n%s - Essa é a string aritmetico", string);
    maiusculo2(string, 0);
    printf("\n%s - Essa é a string indice", string);*/
    
    
}

void maiusculo(char *string){
    if(*string){ //if (*string != "\0")
        *string = toupper(*string);
        maiusculo(string+1);
    }
    
}
/*void maiusculo2(char *string, int i){
    if(string[i]){
        string[i] = toupper(string[i]);
        maiusculo2(string, i+1);
    }
}*/




