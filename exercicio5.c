#include <stdio.h>
main (){
    
     int n= 1, soma =0 ;

     while(n<= 100){
        if(n %2 == 0){
            soma += n;
        }
        n++;
}
   printf("\nsoma dos primeiros 50 pares e: %d", soma);
    
    return 0;
}
