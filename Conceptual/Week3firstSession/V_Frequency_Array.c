#include<stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m); // Read N and M

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]); // Read the array elements
    }

    int freq[m + 1]; // Frequency array of size M+1
    for (int i = 0; i <= m; i++) {
        freq[i] = 0; // Initialize frequency array to 0
    }

    for (int i = 0; i < n; i++) {
        freq[a[i]]++; // Count occurrences
    }

    for (int i = 1; i <= m; i++) {
        printf("%d\n", freq[i]); // Print frequency of each number from 1 to M
    }

    return 0;
}