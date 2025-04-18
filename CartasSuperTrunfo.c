#include <stdio.h>

int main() {
   
    int populacao1, populacao2;
    int km1, pib1;
    int km2, pib2;
    char estado1[50];
    char estado2[50];
    char cidade1[50];
    char cidade2[50];
    char turisticos1[50];
    char turisticos2[50];
   
    printf("Bem vindo, ao Desafio das Cartas! \n");

    printf("Coloque abaixo, a sigla do estado que vai representar sua carta: \n" );
    scanf("%s", &estado1);
    
    printf("Agora, coloque o nome de uma cidade do seu estado: \n");
    scanf("%s", &cidade1);

    printf("Hmm, otimo! Agora coloque a população da sua cidade: \n");
    scanf("%d", &populacao1);    

    printf("Agora nos diga quantos quilometros tem essa cidade: \n");
    scanf("%d", &km1);

    printf("Nossa essa cidade é grande! Agora nos diga o Pib dela: \n");
    scanf("%d", &pib1);

    printf("Uau! Agora nos fale um ponto turistico de lá: \n ");
    scanf("%s", &turisticos1);

    float densidade1 = (float) populacao1 / km1;
    float percap1 = (float) pib1 / populacao1;

    printf(" Ótimo, agora que já cadastramos sua carta vamos colocar uma segunda carta pro jogo! \n");
    
    printf("Agora diga o estado da sua segunda carta! \n");
    scanf("%s", &estado2);

    printf("Agora uma cidade de lá! \n");
    scanf("%s", &cidade2);

    printf("Ok! Agora preciso saber a população de lá: \n");
    scanf("%d", &populacao2);

    printf("Diga agora quantos Km tem: \n");
    scanf("%d", &km2);

    printf("Agora o pib: \n");
    scanf("%d", &pib2);

    printf("Hmm, agora nos fale um ponto turistico de lá: \n");
    scanf("%s", &turisticos2);

    float densidade2 = (float) populacao2 / km2;
    float percap2 = (float) pib2 / populacao2;

    printf("Ótimo agora vamos dizer quais são suas cartas! \n");
    
    printf(" Sua Primeira carta é do estado de: %s - E da cidade de: %s \n", estado1, cidade1);
    printf(" Ela tem a população de: %d - E sua extensão é de: %d \n", populacao1, km1);
    printf("Seu Pib é de: %d - e seus pontos turisticos são: %s \n", pib1, turisticos1);
    printf("Sua Densidade Populacional é: %f\n", densidade1);
    prinf("Seu Pib per capita é de: %f\n", percap1);

    printf("Agora sua segunda carta é do estado de: %s - E da cidade de: %s \n", estado2, cidade2);
    printf("Sua população é de: %d - E sua extensão é de: %d \n", populacao2, km2);
    printf("Seu Pib é de: %d - e seus pontos turisticos são: %s \n", pib2, turisticos2);
    printf("Sua Densidade Populacional é: %f\n", densidade2);
    prinf("Seu Pib per capita é de: %f\n", percap2);
    
    printf("Obrigado por jogar!");


    return 0;
}
