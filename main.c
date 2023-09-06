#include <stdio.h>

int main()
{

    int numeros [10] = {10, 13, 18, 22, 25, 7, 9, 95, 6, 70};
    int impares[5];
    int pares[5];
    
    printf("******* ENTRADA DE DADOS *******");
    
    printf("\n---------------------------------");
    
    for(int i=0;i<10;i++){
        printf("\nNúmeros [%d]: %d",i, numeros[i]);
    }
    
    printf("\n---------------------------------");
    
    for(int i=0;i<10;i++){
        impares[i] = numeros[i];
        if(numeros[i] % 2 != 0){
            printf("\nImpares [%d]: %d",i, impares[i]);
        }
    }
    
    printf("\n---------------------------------");
    
    for(int i=0;i<10;i++){
        pares[i] = numeros[i];
        if(numeros[i] % 2 == 0){
            printf("\nPares [%d]: %d",i, pares[i]);
        }
    }
    
    printf("\n---------------------------------");
    
    printf("\n******* SAÍDA DE DADOS *******");

}
