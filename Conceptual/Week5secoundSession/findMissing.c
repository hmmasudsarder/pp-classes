#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int long long M;
        int A, B, C;
        scanf("%llu %d %d %d", &M, &A, &B, &C);

        int long long product = 1ULL * A * B * C;

        if (product == 0) {
            if (M == 0) {
                printf("0\n");
            } else {
                printf("-1\n");
            }
        } else {
            if (M % product == 0) {
                printf("%llu\n", M / product);
            } else {
                printf("-1\n");
            }
        }
    }

    return 0;
}
