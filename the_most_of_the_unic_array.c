

#include <stdio.h>
#include <stdlib.h>
#define size 10

int main(void){
    int array[size] = {};
    int counter = 0; 
    int duplicate_count = 0;
    int number_index = 0;
    for (int element = 0; element < size; element++){
        array[element] = rand() % (100 - 90);
        printf("%d ", array[element]);
    }
    printf("\n");
    for (int element_array_first_step = 0; element_array_first_step < size; ++element_array_first_step){
            for (int element_array_second_step = 0; element_array_second_step < size; ++element_array_second_step){
                if(array[element_array_first_step] == array[element_array_second_step]){
                    counter++;
                }
            }
            if (duplicate_count <= counter){
                number_index = element_array_first_step;
                duplicate_count = counter;
            }
            counter = 0;
        }
    printf("number: %d, count of dublicate: %d \n", array[number_index], duplicate_count);
    return 0;
}