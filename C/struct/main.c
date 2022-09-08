#include <stdio.h>

//Declaração de estruturas
struct dadosEnd{
  char rua[20];
  int numero;
  char bairro[20];
  int cep;
};
typedef struct dadosEnd dadosEnd; //Declaração depois da Strunct

typedef struct dadosCliente cliente; //Declaração antes da struct
struct dadosCliente{
  char nome[30];
  int idade;
  double valor;
  char genero;
  dadosEnd endCli;
};

int main(){
    //Variaveis comum
    int idade; //espaço do tipo int
    int idades[10]; //10 espaços do tipo int - homogenea
    
    //Declaraçães possiveis;
    cliente cli; //Variaveis do tipo da struct
    //cliente clientes[10]; //Cada indice é do tipo da struct
    //cliente *pontCli; //Ponteiro que recebe endereço do tipo da struct
    
    //Como utilizar uma varivel heterogenea
    printf("\nCliente = %p", &cli);
    cli.idade = 89;
    printf("\nDigite o valor de compra liberado R$");
    scanf("%lf", &cli.valor);
     printf("\nDigite o nome do cliente: ");
     scanf(" %[^\n]", cli.nome);
     
    printf("\nA idade é de %s e  %i e o valor é R$%lf", cli.nome, cli.idade, cli.valor);
    
    //cadastrar endereco do cliente
    cli.endCli.cep = 3000000;
    printf("\nCep do cliente %s é %i", cli.nome, cli.endCli.cep);
    printf("\nDigite o nome da rua");
    scanf();
    printf("\nDigite o numero do endereco: ");
    scanf("%i", &cli.endCli.numero);
    printf("\nRua %s - Numero %i",cli.endCli.rua, cli.endCli.numero);
    
    
    return 0;
}

