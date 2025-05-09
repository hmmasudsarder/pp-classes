#include<stdio.h>
void star_print(int count){
    for (int i = 0; i < count; i++)
    {
        printf("*");
    }
    
}
void space_print(int count){
    for (int i = 0; i < count; i++)
    {
        printf(" ");
    }
    
}
int main (){
    int n; scanf("%d", &n);
    int star_tacker = 2*n-1;
    int space_tacker = 0;
    for (int i = 0; i < n; i++)
    {
        space_print(space_tacker);
        star_print(star_tacker);
        printf("\n");
        space_tacker++;
        star_tacker -=2;
    }
    
    return 0;
}