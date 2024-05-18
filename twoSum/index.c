#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int target;
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    size_t length = sizeof(nums)/sizeof(nums[0]);

    size_t i, j, k;

    printf("Valor alvo: ");
    scanf("%d", &target);

    for (i = 0; i < length; i++){
        for (j = 0; j < length; j++){
            for (k = 0; k < length; k++){
                if (nums[i] + nums[j] + nums[k] == target){
                    printf("%d + %d + %d = %d\n", nums[i], nums[j], nums[k], target);
                    return 0;
                }    
            }
        }
    }
    printf("Nenhum par encontrado\n");

    return 0;
}