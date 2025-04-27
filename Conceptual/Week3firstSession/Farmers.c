#include<stdio.h>
int main (){
    int t;
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++)
    {
        int n, t, d;
        scanf("%d %d %d", &n, &t, &d);
        
        int new_days = (n * d) / (n + t);
        int fewer_days = d - new_days;
        
        printf("%d\n", fewer_days);
    }
    
    return 0;
}