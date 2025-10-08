#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  char input[1005];
    char words[300][75]; 
    int count = 0;

    fgets(input, sizeof(input), stdin);

    input[strcspn(input, "\n")] = '\0';

    char *token = strtok(input, " ");
    while (token != NULL) {
        int found = 0;
       
        for (int i = 0; i < count; i++) {
            if (strcmp(words[i], token) == 0) {
                found = 1;
                break;
            }
        }

        if (!found) {
            strcpy(words[count], token);
            count++;
        }

        token = strtok(NULL, " ");
    }

    for (int i = 0; i < count; i++) {
        if (i > 0) printf(" ");
        printf("%s", words[i]);
    }

    printf("\n"); 
    return 0;
}