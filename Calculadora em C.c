#include <stdio.h>
#include <stdlib.h>

double soma (int a, int b) {
    double resultado = a + b;
    return resultado;
}

double subtracao (int a, int b) {
    double resultado = a - b;
    return resultado;
}

double multiplicacao (int a, int b) {
    double resultado = a * b;
    return resultado;
}

double divisao (int a, int b){ 
    double resultado = a / b;
    return resultado;
}
 
int main() {

    double n1, n2, resultado;
    char operacao;
    char continuar;
    
 do{
    printf("Ola! Seja bem vindo(a) a minha calculadora!\n");
    
    // Lista de operacoes
    printf("Para comecarmos, escolha a operacao que deseja realizar:\n"
    "1 - Adicao\n"
    "2 - Subtracao\n"
    "3 - Multiplicacao\n"
    "4 - Divisao\n");

    scanf("%c", &operacao);
    
    // Solicita o número para a realização da poperação
    printf("Agora escolha o primeiro numero inteiro: ");
    scanf("%lf", &n1);
    printf("Escolha o segundo numero inteiro: ");
    scanf("%lf", &n2);

    // Constroi cada resultado de acordo com a opração escolhida e a tecla digitada.
    switch (operacao) {
        case '1':
            printf("O resultado da adicao e: %.2lf\n", soma(n1, n2));
            break;
        case '2' :
            printf("O resultado da subtracao e: %.2lf\n", subtracao(n1, n2));
            break;
        case '3':
            printf("O resultado da multiplicacao e: %.2lf\n", multiplicacao(n1, n2));
            break;
        case '4':
            if (n2 != 0) {
                printf("O resultado da divisao é: %.2lf\n", divisao(n1, n2));
            } else {
                printf("Erro: Divisao por zero nao e permitida.\n");
            }
            break;
        default:
            printf("Operacao invalida. Por favor, adicionar apenas a operacao desejada.\n");
    }
    // Continuar a execução do programa ou encerrar
    printf("Deseja realizar uma nova operacao? (s/n): ");
    scanf(" %c\n", &continuar);
  } while (continuar == 's');
    
    printf("Obrigado por utilizar a calculadora!\n");
    return 0;
}
