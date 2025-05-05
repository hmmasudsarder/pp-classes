#include<stdio.h>

void positive_to_negative(int n){
    for (int i = n; i >= -n; i--)
    {
        printf("%d ", i);
    }
    
}

int main (){
    int n; scanf("%d", &n);
    if (n>0)
    {
        positive_to_negative(n);
    }
    
    return 0;
}