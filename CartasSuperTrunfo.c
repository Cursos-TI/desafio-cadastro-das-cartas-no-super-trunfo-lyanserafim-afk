#include <stdio.h>

int main() {
    // Carta 1
    char Estado1 = 'A';
    char Código1[] = "A01";
    char NomeCidade1[] = "São Paulo";
    int População1 = 12325000;
    float Área1 = 15121.11;
    float PIB1 = 699.28;
    int NúmeroDePontosTurísticos1 = 50;
    int diferenca = 12325000 - 15121.11;
    float densidadepopulacional1 = 8102.47;
    int diferenca = 699.28 - 12325000;
    float PIBperCapita1 = 56724.32;

    printf("=== Carta 1 ===\n");
    printf("Digite o Estado: ");
    scanf(" %c", &Estado1);

    printf("Digite o Código: ");
    scanf("%s", Código1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", NomeCidade1);

    printf("Digite a População: ");
    scanf("%d", &População1);

    printf("Digite a Área: ");
    scanf("%f", &Área1);

    printf("Digite o PIB: ");
    scanf("%f", &PIB1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &NúmeroDePontosTurísticos1);

    printf("Digite a densidadepopulacional: ");
    scanf("%d", &densidadepopulacional1);

    printf("Digite o PIBperCapita: ");
    scanf("%d", &PIBperCapita1);

    // Carta 2
    char Estado2 = 'B';
    char Código2[] = "B02";
    char NomeCidade2[] = "Rio de Janeiro";
    int População2 = 6748000;
    float Área2 = 1200.25;
    float PIB2 = 300.50;
    int NúmeroDePontosTurísticos2 = 30;
    int diferenca = 6748000 - 1200.25;
    float densidadepopulacional2 = 5622.24;
    int diferenca = 300.50 - 6748000;
    float PIBperCapita2 = 44532.91;

    printf("\n=== Carta 2 ===\n");
    printf("Digite o Estado: ");
    scanf(" %c", &Estado2);

    printf("Digite o Código: ");
    scanf("%s", Código2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", NomeCidade2);

    printf("Digite a População: ");
    scanf("%d", &População2);

    printf("Digite a Área: ");
    scanf("%f", &Área2);

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &NúmeroDePontosTurísticos2);

    printf("Digite a densidadepopulacional: ");
    scanf("%d", &densidadepopulacional2);

    printf("Digite o PIBperCapita: ");
    scanf("%d", &PIBperCapita2);

    //Compracao de cartas
Populacao: Carta; 1; venceu (1)

Área: Carta 1 venceu (1)

PIB: Carta 1 venceu (1)

Pontos Turísticos: Carta 1 venceu (1)

Densidade Populacional: Carta 2 venceu (0)

PIB per Capita: Carta 1 venceu (1)

Super Poder: Carta 1 venceu (1)



    return 0;
}