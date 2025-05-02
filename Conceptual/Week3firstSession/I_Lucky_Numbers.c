#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int tens = N / 10;
    int ones = N % 10;

    if (tens == 0 || ones == 0) {
        printf("NO\n");
    } else if (tens % ones == 0 || ones % tens == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
