
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define N 1024

int main(void){
    char string[N];
    scanf("%s", &string);

    for (int i = 0; i < strlen(string); i++){

        if(string[i] == string[strlen(string) - 1 - i]){
            return false;
            break;
        }
        return true;
    }
    return 0;
}