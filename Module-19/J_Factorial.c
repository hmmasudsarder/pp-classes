#include<stdio.h>
long long int factorial(int n){
    if( n==0 ||n==1){
        return 1;
    }
    long long int res = factorial(n-1);
    return n*res;
}
int main (){
    long long int n;
    scanf("%d", &n);
    long long int ans = factorial(n);
    printf("%lld", ans);
    return 0;
}