#include<stdio.h>
void hello(int n){
    printf("%d\n", n);
    hello(n+1);
    if (n ==5)
    {
        return;
    }
    
}
int main (){
    int n=1;
    printf("Hello World\n");
    hello(1);
    return 0;
}