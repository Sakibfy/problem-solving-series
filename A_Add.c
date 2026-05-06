#include <stdio.h>
int sum(int x, int y)
{
  return x + y;
}

int main() {

    int x,y;
    scanf("%d %d", &x, &y); 
   
    int summation = sum(x, y);
    printf("%d", summation);
    return 0;
}
