#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];

   int sum_1= 0, sum_2 = 0; 

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
       
   if(a[i] % 2 == 0){
    sum_1++;
   }
        
   else if(a[i] % 3 == 0){
    sum_2++;
   }
        
    }
    printf("%d ", sum_1);
    printf("%d ", sum_2);
    
    return 0;
}
