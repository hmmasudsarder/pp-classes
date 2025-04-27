#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++)
    {
        char s[100];
    scanf("%s", s);
    int count_digit = 0;
    int count_capital = 0;
    int count_small = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            count_digit++;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            count_capital++;
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            count_small++;
        }
    }
    printf("%d%d%d", count_digit, count_capital, count_small);
    }
    

    return 0;
}