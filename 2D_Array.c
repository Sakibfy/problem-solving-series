#include <stdio.h>

int main() {
    int r, c;
    if (scanf("%d %d", &r, &c));

    int a[r][c];

    // Input
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Output
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", a[i][j]); // Removed the extra %d
        }
        printf("\n");
    }

    return 0;
}
