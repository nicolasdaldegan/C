//Itens: que serão disponibilizados pela biblioteca
//biblioteca necessarias
//declarações globais(typedef, struct, enum e union)
//costantes e macros
//prototipos.

enum opcoes{fatorial = 1, fibonacci, finalizar};

typedef union info unionInfo;
union info{
  int opMenu;
  int numero;
};

typedef struct dados strDados;
struct dados{
    int resultado;
    int *pontVetor;
};


//Protótipos
void menu();