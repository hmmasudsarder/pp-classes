#include <stdio.h>

void odd_even(int a[], int n) {
    int even_count = 0, odd_count = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]); 
        
        if (a[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }
    
    printf("%d %d\n", even_count, odd_count);
}

int main() {
    int n;
    scanf("%d", &n);
    
    int a[n]; 
    
    odd_even(a, n);  
    
    return 0;
}