#include <stdio.h>




int main() {
    printf("Desafio Super Trunfo - Mestre\n");
    
    
    //Atributos da primeira carta
    unsigned long int populacao1;
    float area1;
    float pib1;
    int npt1;
    char nome1[50];
    char codCarta1[50];
    char estado1[50];
    float DensidadePop1;
    float PIBperCap1;

    float SuperPoder1;


    //atributos da segunda carta
    unsigned long int populacao2;
    float area2;
    float pib2;
    int npt2;
    char nome2[50];
    char codCarta2[50];
    char estado2[50];
    float DensidadePop2;
    float PIBperCap2;

    float SuperPoder2;

   

    // Cadastro da carta 1
    
    
    printf("Insira a letra do estado da carta 1: \n");
        scanf("%s", &estado1);
    
    
    printf("Digite o codigo da cidade: \n");
        scanf("%s", &codCarta1);

    printf("Digite o nome da cidade: \n");
        scanf("%s", &nome1);

    printf("Digite a populacao da cidade: \n");
        scanf("%d", &populacao1);

    printf("Digite a area da cidade: \n");
        scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n");
        scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos da cidade: \n");
        scanf("%d", &npt1);

    //Calculo da densidade populacional, PIBPerCapita e do "Super Poder" da carta 1
    DensidadePop1 = (float) populacao1 / area1;
    PIBperCap1 = (float) (pib1 / populacao1) * 1000000000; //Multiplicando por 1 bilhão para utilizar o valor real do PIB

    SuperPoder1 = (float) area1 + pib1 + npt1 + PIBperCap1 + (1/DensidadePop1);
    


    // Cadastro da carta 1
    printf("Insira a letra do estado da carta 2: \n");
        scanf("%s", &estado2);
       
    printf("Digite o codigo da cidade: \n");
        scanf("%s", &codCarta2);

    printf("Digite o nome da cidade: \n");
        scanf("%s", &nome2);

    printf("Digite a populacao da cidade: \n");
        scanf("%d", &populacao2);

    printf("Digite a area da cidade: \n");
        scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
        scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos da cidade: \n");
        scanf("%d", &npt2);

        //Calculo da densidade populacional, PIBPerCapita e do "Super Poder" da carta 1
    DensidadePop2 = (float) populacao2 / area2;
    PIBperCap2 = (float) (pib2 / populacao2) * 1000000000;//Multiplicando por 1 bilhão para utilizar o valor real do PIB

    SuperPoder2 = (float) area2 + pib2 + npt2 + PIBperCap2 + (1/DensidadePop2);





    

    printf("Carta 1: \n");
    printf("Estado: %s\n", estado1);
    printf("Codigo da carta: %s\n", codCarta1);
    printf("Nome da cidade: %s\n", nome1);
    printf("Populacao da cidade: %d\n", populacao1);
    printf("Area da cidade: %.3f km2\n", area1);
    printf("PIB da cidade: %.3f bilhoes de reais\n", pib1);
    printf("Numero de pontos turisticos da cidade: %d\n", npt1);
    printf("Densidade Populacional: %.2f hab/km2 \n", DensidadePop1);
    printf("PIB per Capita: %.2f reais \n", PIBperCap1);

    printf("----------------------------------------------------\n");

    printf("Carta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Codigo da carta: %s\n", codCarta2);
    printf("Nome da cidade: %s\n", nome2);
    printf("Populacao da cidade: %d\n", populacao2);
    printf("Area da cidade: %.3f km2\n", area2);
    printf("PIB da cidade: %.3f bilhoes de reais\n", pib2);
    printf("Numero de pontos turisticos da cidade: %d\n", npt2);
    printf("Densidade Populacional: %.2f hab/km2 \n", DensidadePop2);
    printf("PIB per Capita: %.2f reais \n", PIBperCap2);

    printf("----------------------------------------------------\n");

    printf("Comparacao de cartas\n");

   
    
        if (populacao1>populacao2){
            printf("Populacao: Carta 1 venceu (1)\n");
        }else{
            printf("Populacao: Carta 2 venceu (0)\n");
        }

        if(area1>area2){
            printf("Area: Carta 1 venceu (1)\n");
        }else{
            printf("Area: Carta 2 venceu (0)\n");
        }

        if(pib1>pib2){
            printf("PIB:Carta 1 venceu (1)\n");
        }else{
            printf("PIB:Carta 2 venceu (0)\n");
        }

        if(npt1>npt2){
            printf("Pontos Turisticos: Carta 1 venceu (1)\n");
        }else{
            printf("Pontos Turisticos: Carta 2 venceu (0)\n");
        }

        if(DensidadePop1<DensidadePop2){
            printf("Densidade Populacional: Carta 1 venceu (1)\n");
        }else{
            printf("Densidade Populacional: Carta 2 venceu (0)\n");
        }
    
       if(PIBperCap1>PIBperCap2){
        printf("PIB per Capita: Carta 1 venceu (1)\n");
       }else{
        printf("PIB per Capita: Carta 2 venceu (0)\n");
       }

       if(SuperPoder1>SuperPoder2){
        printf("SuperPoder: Carta 1 venceu (1)\n");
       }else{
        printf("SuperPoder: Carta 2 venceu (0)\n");
       }
        
    
    

    
    
    
    
    
    
   
    


    return 0;
}
