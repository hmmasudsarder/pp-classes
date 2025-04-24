#include<stdio.h>
int main (){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i <=n; i++)
    {
        scanf("%d", &a[i]);
    }

    int l = 0;
    int r = n-1;
    while(l<r){
        int temp = a[l];
        a[l] = a[r];
        a[r] = temp;
        l++;
        r--;
    }

    for (int i = 0; i <n; i++)
     {
         printf("%d ", a[i]);
    }

    // int rev[n];
    // int j=0;
    // for (int i = n-1; i >=0; i--)
    // {
    //     rev[j] = a[i];
    //     j++;
    // }
    
    // for (int i = 0; i <= n; i++)
    // {
    //     printf("%d ", rev[i]);
    // }
    
    return 0;
}