#include <stdio.h>

void print_desc(int n) {
    if (n == 1) {
        printf("1"); // No trailing space
    } else {
        printf("%d ", n);
        print_desc(n - 1);
    }
}

int main() {
    int N;
    scanf("%d", &N);
    print_desc(N);
    return 0;
}
