#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int matrix[101][101];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (N != M) {
        printf("NO\n");
        return 0;
    }

    int ismil = 1;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (i == j || i + j == N - 1) {
                if (matrix[i][j] != 1) {
                    ismil = 0;
                    break;
                }
            } else {
                if (matrix[i][j] != 0) {
                    ismil = 0;
                    break;
                }
            }
        }
        if (!ismil) break;
    }

    if (ismil) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
