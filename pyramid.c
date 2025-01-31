#include <stdio.h>

int main() {
    int i, j, k, n = 5;

    for (i = 1; i <= n; i++) { 
        for (k = 1; k <= (n - i) * 2; k++) { 
            printf(" ");
        }
        for (j = i; j <= n; j++) { 
            printf("%d ", j);
        }
        for (j = n - 1; j >= i; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}


