#include <stdio.h>
#include <string.h>
int main()
{
    int T;
    char s[100000];

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%s", s);

        int capital = 0, small = 0, digit = 0;

         int leng = strlen(s);

        for (int j = 0; j < leng; j++)
        {
            if (s[j] >= 'A' && s[j] <= 'Z')
            {
                capital++;
            }
            else if (s[j] >= 'a' && s[j] <= 'z')
            {
                small++;
            }
            else if (s[j] >= '0' && s[j] <= '9')
            {
                digit++;
            }
        }
        printf("%d %d %d \n", capital, small, digit);
    }


    return 0;
}
