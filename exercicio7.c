#include<stdio.h>

main(){

    char sexo, olhos, cabelos;
    int totalHabitantes=0, totalEspecifico=0, totalM=0, totalF=0, idade, opcao;
    float salario, porcentagem;
    do{
        totalHabitantes++;
        do{
            fflush(stdin);
            printf("Digite o sexo: (m ou f)\n");
            scanf("%c",&sexo);
            if(sexo!= 'm' && sexo!='f'){
              printf("\nOpcao invalida");
            }
            if(sexo =='m'){
                totalM++;
            }else if(sexo =='f'){
                totalF++;
            }
        }while(sexo!= 'm' && sexo!='f');

        do{ 
            fflush (stdin);
            printf("Digite a cor dos olhos: (a) azuis, (v) verdes, (c) castanhos, (p) pretos\n");
            scanf("%c", &olhos);
            if(olhos != 'a' && olhos != 'v' && olhos !='c' && olhos !='p' ){
               printf("\nOpcao invalida");
            }
        }while(olhos != 'a' && olhos !='v' && olhos !='c' && olhos !='p');

        do{
            fflush(stdin);
            printf("Digite a cor dos cabelos: (l) loiros, (c) castanhos, (p) pretos, (r) ruivos\n");
            scanf("%c",&cabelos);
            if(cabelos !='l' && cabelos != 'c' && cabelos != 'p' && cabelos != 'r'){
               printf("\nOpcao invalida");
            }
        }while(cabelos !='l' && cabelos != 'c' && cabelos != 'p' && cabelos != 'r');

        do{
            fflush(stdin);
            printf("Digite a idade:");
            scanf("%d", &idade);
            if(idade <10 || idade >100){
               printf("\nOpcao invalida");
            }
        }while(idade <10 || idade >100);

        do{
            fflush(stdin);
            printf("Digite a salario: ");
            scanf("%f", &salario);
            if(salario < 0){
                printf("\nOpcao invalida");
            }
        }while(salario <0);

         if(sexo =='f' && olhos =='c' && cabelos =='c' && (idade>18 && idade <35 )){
        totalEspecifico++;
        }
         totalHabitantes++;

        printf("\nDeseja cadastrar um novo habitante: 1 SIM -1 NAO");
        scanf("%d",&opcao);
    }while(opcao != -1);

    porcentagem = (float)totalEspecifico/totalHabitantes*100;

     printf("\nTotal de habitantes cadastrados: %d", totalHabitantes);
    printf("\nTotal de homens cadastrados: %d", totalM);
    printf("\nTotal de mulheres cadastrados: %d", totalF);
    printf("\nPorcentagem de Pessoas com caracteristicas especificas: %.2f", porcentagem);

 return 0;
}