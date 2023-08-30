#include <stdio.h>

int main() {
    double num1, num2, result;  // Variáveis para armazenar os números e o resultado
    char operator;  // Variável para armazenar o operador
    int continuar = 1;  // Variável para controlar se o usuário deseja continuar

    while (continuar) {  // Início do loop principal
        // Solicitar e ler o primeiro número
        printf("Digite um numero: ");
        scanf("%lf", &num1);

        // Solicitar e ler o operador
        printf("Digite um operador (+, -, *, /): ");
        scanf(" %c", &operator);  // Note o espaço antes de %c para consumir possíveis quebras de linha

        // Solicitar e ler o segundo número
        printf("Digite outro numero: ");
        scanf("%lf", &num2);

        // Realizar cálculos com base no operador
        switch (operator) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                } else {
                    printf("Erro: Divisão por zero não é permitida.\n");
                    return 1;  // Saída com erro
                }
                break;
            default:
                printf("Operador inválido.\n");
                return 1;  // Saída com erro
        }

        // Exibir o resultado
        printf("Resultado: %lf\n", result);

        // Perguntar ao usuário se deseja continuar
        printf("Deseja fazer outro calculo? (1 para Sim, 0 para Nao): ");
        scanf("%d", &continuar);
    }  // Fim do loop principal

    return 0;
}
