#include <stdio.h>

int main() {
    float num1, num2, resultado;
    int operador;

    //armazena o primeiro num
    printf("Digite o primeiro numero:\n");
    scanf("%f", &num1);

    //armazena o segundo num
    printf("Digite o segundo numero:\n");
    scanf("%f", &num2);

    //armazena a operação desejada
    printf("Selecione o operador:\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Divisao\n");
    printf("4 - Multiplicacao\n");
    scanf("%d", &operador);

    // realiza as operações e diz o resultado
    switch (operador) {
        case 1:
            resultado = num1 + num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 2:
            resultado = num1 - num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 3:
        if (num2 != 0) {
            resultado = num1 / num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        } else {
            printf("Divisao por zero nao e permitida.\n");
        }
        case 4:
            resultado = num1 * num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        default:
        printf("Error 404 - Operador invalido\n");
        break;
    }
    
    return 0;
}