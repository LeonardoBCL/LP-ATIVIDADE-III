#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    //Variaveis:

    int idade [5];
    float peso[5];
    float altura[5];
    char nome[5][200];
    int contador = 0;
    
    //Questão (Sintaxe):

    for(contador = 0; contador < 5; contador++){

    printf("%d Cadastro. \n Insira o seu nome: \n", contador + 1);
    scanf("%s", &nome[contador]);

    printf("Insira a sua idade: \n");
    scanf("%d", &idade[contador]);

    printf("Insira o seu peso: \n");
    scanf("%f", &peso[contador]);

    printf("Insira a sua altura: \n");
    scanf("%f", &altura[contador]);

    
    fflush(stdin);
    system("cls||clear");
    }

    //Armazenamento de Dados em ( Variaveis ):

    char nome_pessoa_alta[200], nome_pessoa_baixa[200];

    float maior_altura = 0, menor_altura = altura[contador];

    char nome_maior_peso[200], nome_menor_peso[200];

    float maior_peso = 0, menor_peso = peso[0];

    char nome_mais_velho[200], nome_mais_novo[200];
    
    int idade_mais_velho = 0, menor_idade = idade[contador];

    //Assimilação de variáveis

    for (contador = 0; contador < 5; contador++){
        //Exibindo o mais alto:
        if(altura[contador] > maior_altura){
            maior_altura = altura[contador];
            strcpy(nome_pessoa_alta, nome[contador]);
        }
        //Exibindo o mais baixo:
        if(altura[contador] < menor_altura){
            menor_altura = altura[contador];
            strcpy (nome_pessoa_baixa, nome[contador]);
        }
        //Exibindo o maior e menor peso:
        if (peso[contador] > maior_peso){
            maior_peso = peso[contador];
            strcpy(nome_menor_peso, nome[contador]);
        }
        if (peso[contador] < menor_peso){
            menor_peso = peso[contador];
            strcpy(nome_menor_peso, nome[contador]);
        }
        //Exibindo maior e menor idade:
        if( idade[contador] > idade_mais_velho ){
            idade_mais_velho = idade[contador];
            strcpy(nome_mais_velho, nome[contador]);
        }
        if( idade[contador] < menor_idade){
            menor_idade = idade[contador];
            strcpy (nome_mais_novo, nome[contador]);
        }

    }

//Exibindo resultados:
    printf("\nInformações sobre a pessoa mais alta:\n");
    printf("Nome: %s\n", nome_pessoa_alta);
    printf("Altura: %.2f metros\n", maior_altura);

    printf("\nInformações sobre a pessoa mais baixa:\n");
    printf("Nome: %s\n", nome_pessoa_baixa);
    printf("Altura: %.2f metros\n", menor_altura);

    printf("\nInformações sobre a pessoa com maior peso:\n");
    printf("Nome: %s\n", nome_maior_peso);
    printf("Peso: %.2f kg\n", maior_peso);

    printf("\nInformações sobre a pessoa com menor peso:\n");
    printf("Nome: %s\n", nome_menor_peso);
    printf("Peso: %.2f kg\n", menor_peso);

    printf("\nInformações sobre a pessoa mais velha:\n");
    printf("Nome: %s\n", nome_mais_velho);
    printf("Idade: %d anos\n", idade_mais_velho);

    printf("\nInformações sobre a pessoa mais nova:\n");
    printf("Nome: %s\n", nome_mais_novo);
    printf("Idade: %d anos\n", menor_idade);

    return 0;

}
