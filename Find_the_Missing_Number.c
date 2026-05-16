#include <stdio.h>

int main()
{
 int T;
 scanf("%d", &T);

 while (T--)
 {
    long long   M, A, B, C;

    scanf("%lld %lld %lld %lld", &M, &A, &B, &C);

    long mul = A * B * C;

    if(mul == 0)
    {
        if(M == 0)
        {
            printf("0\n");
        }else 
        {
           printf("-1\n");
        }
        
        
    }else{

        if(M % mul == 0)
        {
            long long ans = M / mul;
            printf("%lld\n", ans);
        }
        else
            {
                printf("-1\n");
            }
    }
 }
 

    return 0;
}