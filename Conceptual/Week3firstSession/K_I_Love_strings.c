#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++)
    {
    char s[51], t[51];
    scanf("%s %s", &s, &t);
    int lent_s = strlen(s);
    int lent_t = strlen(t);
    int i = 0, j = 0;
    while (i < lent_s && j < lent_t)
    {
        printf("%c%c", s[i], t[j]);
        i++;
        j++;
    }
    while (j < lent_t)
    {
        printf("%c", t[j]);
        j++;
    }
    while (i < lent_s)
    {
        printf("%c", s[i]);
        i++;
    }
    printf("\n");
    }
    
    return 0;
}