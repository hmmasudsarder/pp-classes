#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    for (int tc = 0; tc <= T; tc++)
    {
        int n, y;
        scanf("%d %d", &n, &y);
        if (n > y)
        {
            int temp = n;
            n = y;
            y = temp;
        }
        int sum = 0;
        for (int i = n; i < y; i++)
        {
            if (i % 2 == 1)
            {
                sum += i;
            }
        }
        printf("sum %d\n", sum);
    }

    return 0;
}