//Funções do desenvolvedor
#include "biblioteca.h"

void menu(){
    unionInfo op;
    int opAux;
    strDados dadosCompleto;
    dadosCompleto.pontVetor = NULL;
    do{
        printf("\n1 - Fatorial"
                "\n2 - Fibonacci"
                "\n3 - Finalizar"
                "\nDigite sua opção: ");
        scanf("%d", &op.opMenu);
        opAux = op.opMenu;
        
        switch (op.opMenu) {
            case fatorial:
                validarNumero(&op, "Número para calcular fatorial: ");
                calcularFatorial(&op, &dadosCompleto);
                break;
            case fibonacci:
                validarNumero(&op, "Termo de fibonacci a ser calculado: ");
                calcularFibonacci(&op, &dadosCompleto);
                break;
            case finalizar:
                printf("\nPrograma finalizado.");
                break;
            default:
                printf("\nOpção inválida.");
        }
        
    } while (opAux != finalizar);
}
