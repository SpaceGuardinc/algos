

#include <stdio.h>
#include <stdlib.h>
#define size 11

int main(void){
    char array[size];
    int counter = 0; 
    int duplicate_count = 0;
    int number_index = 0;
    fgets(array, size, stdin);
    for (int element = 0; element < size; element++){
        printf("%c ", array[element]);
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
    printf("char: %c, count of dublicate: %d \n", array[number_index], duplicate_count);
    return 0;
}