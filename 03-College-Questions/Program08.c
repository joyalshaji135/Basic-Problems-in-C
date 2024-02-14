#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100
#define MAX_STRINGS 100

void swap(char **str1, char **str2) {
    char *temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}

void sortStrings(char *strings[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(strings[i], strings[j]) > 0) {
                swap(&strings[i], &strings[j]);
            }
        }
    }
}

int main() {
    char input[MAX_LENGTH];
    char *strings[MAX_STRINGS];
    int numStrings = 0;

    printf("Enter strings (type 'end' to stop):\n");
    while (1) {
        printf("String %d: ", numStrings + 1);
        fgets(input, MAX_LENGTH, stdin);
        input[strcspn(input, "\n")] = '\0'; 

        if (strcmp(input, "end") == 0) {
            break;
        }
        
        strings[numStrings] = strdup(input);
        numStrings++;

        if (numStrings >= MAX_STRINGS) {
            printf("Maximum number of strings reached. Exiting input loop.\n");
            break;
        }
    }

    sortStrings(strings, numStrings);

    printf("\nSorted strings:\n");
    for (int i = 0; i < numStrings; i++) {
        printf("%s\n", strings[i]);
        free(strings[i]); 
    }

    return 0;
}
