#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int N;
        scanf("%d", &N);

        int A[N], B[N], C[N];

        // 1. input A
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &A[i]);
        }

        // 2. copy A → B
        for (int i = 0; i < N; i++)
        {
            B[i] = A[i];
        }

        // 3. sort B (ascending)
        for (int i = 0; i < N; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                if (B[i] > B[j])
                {
                    int temp = B[i];
                    B[i] = B[j];
                    B[j] = temp;
                }
            }
        }

        // 4. build C array
        for (int i = 0; i < N; i++)
        {
            C[i] = abs(A[i] - B[i]);
        }

        // 5. print C
        for (int i = 0; i < N; i++)
        {
            printf("%d ", C[i]);
        }
        printf("\n");
    }

    return 0;
}