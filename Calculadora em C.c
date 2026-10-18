#include <stdio.h>
 
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
            resultado = n1 + n2;
            printf("O resultado da adicao é: %.2lf\n", resultado);
            break;
        case '2':
            resultado = n1 - n2;
            printf("O resultado da subtracao é: %.2lf\n", resultado);
            break;
        case '3':
            resultado = n1 * n2;
            printf("O resultado da multiplicacao é: %.2lf\n", resultado);
            break;
        case '4':
            if (n2 != 0) {
                resultado = n1 / n2;
                printf("O resultado da divisao é: %.2lf\n", resultado);
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