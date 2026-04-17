#include <stdio.h>

int main(){

    //carta 1 
    
    char estado1;
    char codigo1[5];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    //carta 2

    char estado2;
    char codigo2[5];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    //entrada de dados carta 1

    printf("Digite o estado: ");
    scanf(" %c", &estado1);
    printf("Digite o codigo: ");
    scanf("%s", codigo1);
    printf("Digite a cidade: ");
    scanf("%s", cidade1);
    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);
    printf("Digite a area: ");
    scanf("%f", &area1);
    printf("Digite o pib: ");
    scanf("%f", &pib1);
    printf("Digite os pontos turisticos: ");
    scanf("%d", &pontosturisticos1);

    //entrada de dados carta 2

    printf("Digite o estado: ");
    scanf(" %c", &estado2);
    printf("Digite o codigo: ");
    scanf("%s", codigo2);
    printf("Digite a cidade: ");
    scanf("%s", cidade2);
    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);
    printf("Digite a area: ");
    scanf("%f", &area2);
    printf("Digite o pib: ");
    scanf("%f", &pib2);
    printf("Digite os pontos turisticos: ");
    scanf("%d", &pontosturisticos2);

    //exibição carta 1

    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", pontosturisticos1);

    //exibição carta 2

    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontosturisticos2);

    //Calcular a Densidade Populacional

    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;


    //Calcular o PIB per Capita

    float pib_per_capita1 = (pib1 * 1000000000.0f) / populacao1;
    float pib_per_capita2 = (pib2 * 1000000000.0f) / populacao2;


    //super poder
    
    float super_poder1 = (float)populacao1 + area1 + pib1 + pontosturisticos1 + pib_per_capita1 + (1.0f / densidade1);
    float super_poder2 = (float)populacao2 + area2 + pib2 + pontosturisticos2 + pib_per_capita2 + (1.0f / densidade2);

    // Menu Interativo

    printf("Escolha o atributo:\n");
    printf("1- Populacao\n");
    printf("2- Area\n");
    printf("3- PIB\n");
    printf("4- Pontos turisticos\n");
    printf("5- PIB per Capita\n");
    printf("6- Densidade Populacional\n");
    printf("7- Super Poder\n");

    int atributo;
    scanf("%d", &atributo);

    switch(atributo){
        case 1:
            if(populacao1 > populacao2){
                printf("Nome da cidade: %s\n Nome do atribbuto: Populacao\n valor do atributo: %lu venceu", cidade1, populacao1);
            }else if(populacao1 < populacao2){
                printf("Nome da cidade: %s\n Nome do atribbuto: Populacao\n valor do atributo: %lu venceu", cidade2, populacao2);
            }else{
                printf("Nome da cidade1: %s\n Nome da cidade2: %s\n Empate\n", cidade1, cidade2);
            }
            break;
        case 2:
            if(area1 > area2){
                printf("Nome da cidade: %s\n Nome do atribbuto: Area\n valor do atributo: venceu %.2f", cidade1, area1);
            }else if(area1 < area2){
                printf("Nome da cidade: %s\n Nome do atribbuto: Area\n valor do atributo: venceu %.2f", cidade2, area2);
            }else{
                printf("Nome da cidade1: %s\n Nome da cidade2: %s\n Empate\n", cidade1, cidade2);
            }
            break;
        case 3:
            if(pib1 > pib2){
                printf("Nome da cidade: %s\n Nome do atribbuto: PIB\n valor do atributo: venceu %.2f", cidade1, pib1);
            }else if(pib1 < pib2){
                printf("Nome da cidade: %s\n Nome do atribbuto: PIB\n valor do atributo: venceu %.2f", cidade2, pib2);
            }else{
                printf("Nome da cidade1: %s\n Nome da cidade2: %s\n Empate\n", cidade1, cidade2);
            }
            break;
        case 4:
            if(pontosturisticos1 > pontosturisticos2){
                printf("Nome da cidade: %s\n Nome do atribbuto: Pontos turisticos\n valor do atributo: venceu %d", cidade1, pontosturisticos1);
            }else if(pontosturisticos1 < pontosturisticos2){
                printf("Nome da cidade: %s\n Nome do atribbuto: Pontos turisticos\n valor do atributo: venceu %d", cidade2, pontosturisticos2);
            }else{
                printf("Nome da cidade1: %s\n Nome da cidade2: %s\n Empate\n", cidade1, cidade2);
            }
            break;
        case 5:
            if(pib_per_capita1 > pib_per_capita2){
                printf("Nome da cidade: %s\n Nome do atribbuto: PIB per Capita\n valor do atributo: venceu %.2f", cidade1, pib_per_capita1);
            }else if(pib_per_capita1 < pib_per_capita2){
                printf("Nome da cidade: %s\n Nome do atribbuto: PIB per Capita\n valor do atributo: venceu %.2f", cidade2, pib_per_capita2);
            }else{
                printf("Nome da cidade1: %s\n Nome da cidade2: %s\n Empate\n", cidade1, cidade2);
            }
            break;
        case 6:
    if (densidade1 == densidade2) {
        printf("Nome da cidade1: %s\n Nome da cidade2: %s\n Empate\n", cidade1, cidade2);
    } else {
        if (densidade1 < densidade2) {
            printf("Nome da cidade: %s\n Nome do atribbuto: Densidade Populacional\n valor do atributo: venceu %.2f", cidade1, densidade1);
        } else {
            printf("Nome da cidade: %s\n Nome do atribbuto: Densidade Populacional\n valor do atributo: venceu %.2f", cidade2, densidade2);
        }
    }
            break;
        case 7:
            if(super_poder1 > super_poder2){
                printf("Nome da cidade: %s\n Nome do atribbuto: Super Poder\n valor do atributo: venceu %.2f", cidade1, super_poder1);
            }else if(super_poder1 < super_poder2){
                printf("Nome da cidade: %s\n Nome do atribbuto: Super Poder\n valor do atributo: venceu %.2f", cidade2, super_poder2);
            }else{
                printf("Nome da cidade1: %s\n Nome da cidade2: %s\n Empate\n", cidade1, cidade2);
            }
            break;
        default:
            printf("Atributo invalido\n");
            break;
    }
   
    return 0;
}

























