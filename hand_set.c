
#include <stdio.h>
#include <stdlib.h>
#define size 10

int main(void){
    int array[size] = {};
    int counter = 0; 
    for (int element = 0; element < size; element++){
        array[element] = rand() % (100 - 90);
        printf("%d ", array[element]);
    }
    printf("\n");
    for (int element_array_first_step = 0; element_array_first_step < size; ++element_array_first_step){
            for (int element_array_second_step = element_array_first_step + 1; element_array_second_step < size; ++element_array_second_step){
                if(array[element_array_first_step] == array[element_array_second_step]){
                    counter++;
                }
            }
            if (counter == 0){
                printf("%d ", array[element_array_first_step]);
            } 
            counter = 0;
        }
    return 0;
}