#include<stdio.h>
void printF(int n){
    if (n>0)
    {
        printF(n-1);
        printf("%d\n", n);
    }
    
}
int main (){
    int n; 
    scanf("%d", &n);
    printF(n);
    return 0;
}