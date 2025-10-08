#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#define MAXN 1005

int main() {
    int N;
    if (scanf("%d", &N) != 1) return 0;

    int X[MAXN];
    for (int i = 0; i < N; i++) {
        scanf("%d", &X[i]);
    }

    long long total = 0;
    int max = X[0];
    for (int i = 0; i < N; i++) {
        total += X[i];
        if (X[i] > max) max = X[i];
    }

    int count = 0;
    int days[MAXN];
    for (int i = 0; i < N; i++) {
        if (X[i] == max) {
            days[count++] = i + 1; // hari mulai dari 1
        }
    }

    double percentage = 0.0;
    if (total > 0) {
        percentage = ((double)max * (double)count) / (double)total * 100.0;
    }

    printf("Max : %d\n", max);
    printf("Count : %d\n", count);
    printf("days : ");
    for (int i = 0; i < count; i++) {
        if (i) printf(" ");
        printf("%d", days[i]);
    }
    printf("\n");
    printf("Percentage : %.3f%%\n", percentage);


    return 0;
}