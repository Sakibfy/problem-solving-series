#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        int M1, M2, D;

        scanf("%d %d %d", &M1, &M2, &D);

        int new_day = (M1 * D) / (M1 + M2);

        int complete = D - new_day;

        printf("%d\n", complete);
    }

    return 0;
}
