#include <stdio.h>
 void min_max(int a[], int n)
{
    int min = 0;
    int max = 0;
    for (int i = 0; i < n; i++)
    {

        
        printf("%d ", a[i]);
        
    }
    

}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);      
    
    }
    min_max(a,n);

    return 0;
}
