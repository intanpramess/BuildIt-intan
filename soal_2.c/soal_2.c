#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N;
    scanf("%d", &N);

    
    for (int i = 1; i < N; i++) {
        for (int j = i; j < N - 1; j++) {
            printf(" ");
        }

        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    for (int j = 0; j < N - 2; j++) {
        printf(" ");
    }
    printf("*\n"); 
    return 0;
}