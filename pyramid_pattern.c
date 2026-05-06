#include <stdio.h>





int main() {
    int a[5] = {1,2,3,4};
    int *p;

    p= a + 3;
    *p = 5;
    printf("%d \n", a[3]);
    return 0;
}


