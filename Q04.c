#include <stdio.h>

int main() {
    int numeros[5];
    int quantidadeImpares = 0;
    int quantidadeNegativos = 0;
    int maior, menor;
    int somaPares = 0, contaPares = 0;
    float mediaInseridos, mediaPares;
    int contador = 0;

    // Leitura dos números
    for (int contador_1 = 0; contador_1 < 5; contador_1++) {
        printf("Digite o %dº número: ", contador_1 + 1);
        scanf("%d", &numeros[contador_1]);

        // Verifica se é ímpar
        if (numeros[contador_1] % 2 != 0) {
            quantidadeImpares++;
        }

        // Verifica se é negativo
        if (numeros[contador_1] < 0) {
            quantidadeNegativos++;
        }

        // Atualiza maior e menor
        if (contador_1 == 0 || numeros[contador_1] > maior) {
            maior = numeros[contador_1];
        }
        if (contador_1 == 0 || numeros[contador_1] < menor) {
            menor = numeros[contador_1];
        }

        // Calcula soma e quantidade de números pares
        if (numeros[contador_1] % 2 == 0) {
            somaPares += numeros[contador_1];
            contaPares++;
        }
    }

    // Calcula média de números inseridos
    mediaInseridos = (float)(numeros[0] + numeros[1] + numeros[2] + numeros[3] + numeros[4] + numeros[5]) / 5;

    // Calcula média de números pares (se houver pelo menos um número par)
    if (contaPares > 0) {
        mediaPares = (float) somaPares / contaPares;
    } else {
        mediaPares = 0;
    }

    // Exibe os resultados
    printf("\nResultados:\n");
    printf("Quantidade de números ímpares: %d\n", quantidadeImpares);
    printf("Quantidade de números negativos: %d\n", quantidadeNegativos);
    printf("Maior número: %d\n", maior);
    printf("Menor número: %d\n", menor);
    printf("Média de números pares: %.2f\n", mediaPares);
    printf("Média de números inseridos: %.2f\n", mediaInseridos);

    return 0;
}