#include<stdio.h>
int sum_first_and_last_digit(int n){
    int last_digit = n % 10;
    int first_digit = n/1000;
    int sum = first_digit + last_digit;
    return sum;
}
int main (){
    int n; scanf("%d", &n);
    int ans = sum_first_and_last_digit(n);
    printf("%d", ans);
    return 0;
}