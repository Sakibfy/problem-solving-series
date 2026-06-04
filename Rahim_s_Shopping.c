#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);  
    }

    int ans = -1;

    for (int i = 0; i < n; i++)
    {
        int cur_val = a[i];

        if (cur_val <= k)
        {
          if (ans < cur_val)
          {
           ans = cur_val;
          }
          
        }
        
    }

    printf("%d", ans);
    

    return 0;
}
