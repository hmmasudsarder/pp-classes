#include<stdio.h>

void positive_to_negative(int n){
    for (int i = n; i >= -n; i--)
    {
        printf("%d ", i);
    }
}

void negative_to_positive(int n){ // Corrected function name
    for (int i = n; i <= -n; i++)
    {
        printf("%d ", i);
    }
}

int main (){
    int n; 
    scanf("%d", &n);
    if (n > 0)
    {
        positive_to_negative(n);
    }
    else if (n<0)
    {
        negative_to_positive(n); // Corrected function call
    }
}