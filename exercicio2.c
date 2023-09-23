#include <stdio.h>

main(){
    int n, variable=0;
    printf("Informe um numero inteiro positivo: ");
    scanf("%d", &n);

    while(n >= variable){
        printf("\nValor de N: %d", n);
        n--;   
    }
    return 0;
}