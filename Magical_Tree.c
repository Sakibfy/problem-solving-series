#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int rows = (n + 11) / 2;       
    int maxWidth = 2 * rows - 1;   
    int totalWidth = maxWidth;     
    
    
    for (int i = 1; i <= rows; i++) {
        int stars = 2 * i - 1;
        int spaces = (totalWidth - stars) / 2;
        for (int j = 0; j < spaces; j++) printf(" ");
        for (int j = 0; j < stars; j++) printf("*");
        printf("\n");
    }
    
   
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) printf(" ");
        for (int j = 0; j < n; j++) printf("*");
        printf("\n");
    }
    
    return 0;
}