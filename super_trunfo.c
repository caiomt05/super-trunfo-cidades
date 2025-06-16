#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CARTAS 100
#define MAX_STR 50

typedef struct {
    char estado[MAX_STR];
    int codigo;
    char nomeCidade[MAX_STR];
    long populacao;
    double pib;
    double area;
    int pontosTuristicos;

    // atributos derivados
    double densidadePopulacional;
    double pibPerCapita;
} Carta;

void calcularAtributosDerivados(Carta *carta) {
    if (carta->area > 0)
        carta->densidadePopulacional = carta->populacao / carta->area;
    else
        carta->densidadePopulacional = 0;

    if (carta->populacao > 0)
        carta->pibPerCapita = carta->pib / carta->populacao;
    else
        carta->pibPerCapita = 0;
}

void cadastrarCarta(Carta *carta) {
    printf("Digite o estado: ");
    fgets(carta->estado, MAX_STR, stdin);
    carta->estado[strcspn(carta->estado, "\n")] = 0; // remove \n

    printf("Digite o codigo (inteiro): ");
    scanf("%d", &carta->codigo);
    getchar(); // consumir \n

    printf("Digite o nome da cidade: ");
    fgets(carta->nomeCidade, MAX_STR, stdin);
    carta->nomeCidade[strcspn(carta->nomeCidade, "\n")] = 0;

    printf("Digite a populacao (numero inteiro): ");
    scanf("%ld", &carta->populacao);
    getchar();

    printf("Digite o PIB (valor decimal): ");
    scanf("%lf", &carta->pib);
    getchar();

    printf("Digite a area em km2 (decimal): ");
    scanf("%lf", &carta->area);
    getchar();

    printf("Digite o numero de pontos turisticos (inteiro): ");
    scanf("%d", &carta->pontosTuristicos);
    getchar();

    calcularAtributosDerivados(carta);

    printf("Carta cadastrada com sucesso!\n\n");
}

void exibirCarta(Carta carta) {
    printf("Estado: %s\n", carta.estado);
    printf("Codigo: %d\n", carta.codigo);
    printf("Cidade: %s\n", carta.nomeCidade);
    printf("Populacao: %ld\n", carta.populacao);
    printf("PIB: %.2lf\n", carta.pib);
    printf("Area: %.2lf km2\n", carta.area);
    printf("Pontos turisticos: %d\n", carta.pontosTuristicos);
    printf("Densidade populacional: %.2lf hab/km2\n", carta.densidadePopulacional);
    printf("PIB per capita: %.2lf\n", carta.pibPerCapita);
    printf("--------------------------\n");
}

int main() {
    Carta cartas[MAX_CARTAS];
    int totalCartas = 0;
    char opcao;

    do {
        printf("Cadastro de Carta Super Trunfo\n");
        printf("1 - Cadastrar nova carta\n");
        printf("2 - Listar cartas cadastradas\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        opcao = getchar();
        getchar(); // consumir \n

        switch (opcao) {
            case '1':
                if (totalCartas < MAX_CARTAS) {
                    cadastrarCarta(&cartas[totalCartas]);
                    totalCartas++;
                } else {
                    printf("Limite de cartas atingido!\n");
                }
                break;

            case '2':
                if (totalCartas == 0) {
                    printf("Nenhuma carta cadastrada ainda.\n");
                } else {
                    for (int i = 0; i < totalCartas; i++) {
                        printf("Carta %d:\n", i + 1);
                        exibirCarta(cartas[i]);
                    }
                }
                break;

            case '0':
                printf("Encerrando programa.\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != '0');

    return 0;
}
