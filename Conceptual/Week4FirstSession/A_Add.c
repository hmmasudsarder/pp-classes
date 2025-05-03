#include <stdio.h>

int sum_two_numbers(int x, int y) {
    return x + y;
}

int main() {
    int x, y;


    scanf("%d %d", &x, &y);

    printf("%d\n", sum_two_numbers(x, y));

    return 0;
}
