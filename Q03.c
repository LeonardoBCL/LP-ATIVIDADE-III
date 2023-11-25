#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Variaveis:

    char nomes[9999][200];
    int numero_tel[9999];
    int selecao;
    int contador_1 = 0;
    int conta_case2 = 0;

    // Questão(sintaxe):

    do
    {
        printf("\t Lista de contatos: \n");
        printf("   1 - Adicionar novo número \n");
        printf("   2 -  Mostrar números cadastrados \n \n");

        printf("Digite o código do que deseja fazer: ");
        scanf("%d", &selecao);

        printf("\n");

        switch (selecao)
        {
        // Cadastro em caso 1:
        case 1:

            fflush(stdin);

            printf("Digite o nome: ");
            gets(nomes[contador_1]);

            printf("Digite o telefone: ");
            scanf("%d", &numero_tel[contador_1]);

            contador_1++;
            break;
        // Cadastro em caso 2:
        case 2:
            printf("Números cadastrados: \n");
            for (conta_case2 = 0; conta_case2 < contador_1; conta_case2++)
            {
                printf("Nome: %s \t Telefone: %d \n", nomes[conta_case2], numero_tel[conta_case2]);
            }
            break;

        default:

            // Outra saída:
            printf("Tente novamente");
            // função LIMPATELA:
            system("cls || clear");
        }
    } while (selecao != 2);

    return 0;
}