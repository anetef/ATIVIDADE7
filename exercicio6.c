/*Elabore um algoritmo que permita ao usuário realizar a compra de frutas. Assim, apresente a 
lista de frutas disponíveis, abaixo, com seus respectivos valores. O algoritmo deve permitir ao
 usuário retomar o menu frutas quantas vezes quiser, e solicitar a quantidade de frutas.
  Ao final, apresente o valor total da compra. 

1 => ABACAXI – 5,00 a unidade 2 => MAÇA – 1,00 a unidade 3 => PERA – 4,00 a unidade*/

#include <stdio.h>

main() {
    int totalFruta, codFruta, opcao, qtd;
    float totalCompra=0;
    do{ 
        printf("Lista de frutas disponiveis, digite o codigo:");
        printf("\n1 => ABACAXI – 5,00 a unidade 2 => MAcA – 1,00 a unidade 3 => PERA – 4,00\n");
        scanf("%d", &codFruta);
        switch (codFruta){
            case 1:
            printf("\nDigite quantidade de Abacaxi: ");
            scanf("%d",&qtd);
            totalFruta = qtd * 5;
            totalCompra += totalFruta;
            break;
            case 2:
            printf("\nDigite quantidade de Maca: ");
            scanf("%d",&qtd);
            totalFruta = qtd * 1;
            totalCompra += totalFruta;
            break;
            case 3:
            printf("\nDigite quantidade de Pera: ");
            scanf("%d",&qtd);totalFruta = qtd * 4;
            totalCompra += totalFruta;
            break;
        }
        printf("Deseja escolher outra? 1-SIM  0-NAO");
        scanf("%d",&opcao);
    }while (opcao!= 0);

    printf("Total Compra:%.2f", totalCompra);
    
    
    return 0;
}
