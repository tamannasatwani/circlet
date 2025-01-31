#include <stdio.h>

int main() {
    int i, j, num = 11; // Start from 11
    for (i = 1; i <= 4; i++) { // Outer loop for rows
        for (j = 1; j <= i; j++) { // Inner loop for columns
            printf("%d ", num);
            num++; // Increment number
        }
        printf("\n"); // Move to the next row
    }
    return 0;
}

