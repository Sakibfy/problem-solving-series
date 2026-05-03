#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
   int str = n;
    for (int  i = 1; i <= n; i++)
    {
        for(int  i = 1; i <= str; i++)
        {
           printf("*");
        }
        str--;

        printf("\n");
    }
    
   





    return 0;
}
