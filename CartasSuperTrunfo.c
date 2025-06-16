#include <stdio.h>
#include <string.h>

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char codigoA[20], codigoB[20];
    char cidadeA[50], cidadeB[50];
    int populacaoA, populacaoB;
    float areaA, areaB, pibA, pibB;
   
    
        // Cadastro das Cartas:
        // Solicita os dados da primeira cidade
        printf("Digite o código da cidade 1: ");
        scanf("%s", codigoA);
        printf("Digite o nome da cidade 1: ");
        scanf("%s", cidadeA);
        printf("Digite a população da cidade 1: ");
        scanf("%d", &populacaoA);
        printf("Digite a área da cidade 1 (em km²): ");
        scanf("%f", &areaA);
        printf("Digite o PIB da cidade 1: ");
        scanf("%f", &pibA);

        // Solicita os dados da segunda cidade
        printf("\nDigite o código da cidade 2: ");
        scanf("%s", codigoB);
        printf("Digite o nome da cidade 2: ");
        scanf("%s", cidadeB);
        printf("Digite a população da cidade 2: ");
        scanf("%d", &populacaoB);
        printf("Digite a área da cidade 2 (em km²): ");
        scanf("%f", &areaB);
        printf("Digite o PIB da cidade 2: ");
        scanf("%f", &pibB);


    return 0;
}
