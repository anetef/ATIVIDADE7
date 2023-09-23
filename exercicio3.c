#include <stdio.h>

main(){
    int n, variable=100;
    printf("Informe um numero inteiro impar positivo: ");
    scanf("%d", &n);


    while(n <= variable){
        printf("\nValor de N: %d", n);
        n= n + 2;   
    }
    return 0;
}