#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int a[] = {0,1,2,3,4,5,6};
    size_t i, j;

    size_t length = sizeof(a) / sizeof(a[0]);

    // Loop externo controla o número de passagens
    for (i = 0; i <= length - 1; i++){
        // Loop interno controla o array até a última posição ordenada
        for (j = 0; j <= length - 1 - i; j++){
            // Comparação para ordem decrescente
            if (a[j] < a[j + 1]){
                // Troca de posição dos elementos
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < length; i++){
        printf("%d\n", a[i]);
    }   

    return 0;
}