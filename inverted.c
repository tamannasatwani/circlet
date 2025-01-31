#include <stdio.h>

int main() {
    int i, j, k;
    int n = 5; // Number of rows

    for (i = 0; i < n; i++) { // Loop for rows
        for (k = 0; k < i; k++) { // Loop for spaces
            printf("  ");
        }
        for (j = 0; j < n - i; j++) { // Loop for numbers
            printf("%d ", j % 2); // Alternating 1 and 0
        }
        printf("\n");
    }

    return 0;
}

