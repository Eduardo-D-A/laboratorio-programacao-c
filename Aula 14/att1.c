#include <stdio.h>

int main(){
    int numeros[2][2] = {
    {10, 20},
    {30, 40}
    };
    printf("|%d|%d|\n", numeros[0][0], numeros[0][1]);
    printf("|%d|%d|\n", numeros[1][0], numeros[1][1]);

    return 0;
}
