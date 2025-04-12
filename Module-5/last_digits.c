#include<stdio.h>
int main (){
    int n;
    scanf("%d", &n);
    int first_digit = n %10;

    printf("%d", first_digit);
    return 0;
}