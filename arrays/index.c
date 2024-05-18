#include <stdio.h>
#include <stdlib.h>

int main() {
    int array[5];
    size_t length = sizeof(array) / sizeof(array[0]);
    int temp;
    size_t i;

    // Entrada de valores para o array
    for (i = 0; i < length; i++) {
        printf("Valor %lu: ", (unsigned long)(i + 1));
        scanf("%d", &temp);
        array[i] = temp;
    }
    
    // Impressão dos valores do array
    printf("Valores do array:\n");
    for (i = 0; i < length; i++) {
        printf("Valor %lu: %d\n", (unsigned long)(i + 1), array[i]);
    }

    return 0;
}
