#include<stdio.h>
int findMax(int a[], int n, int inx){
    if (inx == n)
    {
        return a[inx - 1];
    }
    int max = findMax(a, n, inx +1);
    if (a[inx] > max)
    {
        a[inx];
    }else
    {
        return max;
    }
    
    
    
}
int main (){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int max_value = findMax(a, n, 0);
    printf("%d\n", max_value);
    
    return 0;
}