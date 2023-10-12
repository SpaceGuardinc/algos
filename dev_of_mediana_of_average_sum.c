
#include <stdio.h>
#include <stdlib.h>

#define N 13

int main(void){
    int array_1[N] = {};
    int array_2[N] = {};
    int array_3[N] = {};
    int sum = 0;
    int mediana = 0;
    int deviation = 0;
    for (int i = 0; i < N; i++){
        // array1 = {1 ,2 ,3 ,4 ,5}
        // array2 = {1, 2, 3, 4, 5}
        // array3 = {1, 1, 1, 1, 1}
        // mediana = 1
        // arif = 1
        // otkl = 1 - 1 = 0
        // index = {0, 1, 2, 3, 4}
        array_1[i] = 1 + rand() % (100 - 87);
        array_2[i] = 1 + rand() % (100 - 87);
        array_3[i] = array_1[i] / array_2[i];
    }
    for (int i = 0; i < N; i++){
        sum = sum + array_3[i];
    }
    mediana = array_3[6];
    deviation = abs(sum - mediana);
    printf("%d", deviation);
    return 0;
}