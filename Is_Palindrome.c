#include <stdio.h>
#include <string.h>

int is_palindrome(char s[]) 
{

    int leng = strlen(s);

   int i = 0;
   int j = leng - 1;

   while (i < j)
   {
    if(s[i] != s[j])
    return 0;
    i++;
   j--;
   }
   
   
   
    return 1;
}


int main() {
    char s[1000];
    scanf("%s", s);
    
   if(is_palindrome(s))
   {
     printf("Palindrome");
   }
   else
    {
        printf("Not Palindrome");
    }

    return 0;
}
