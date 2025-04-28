#include <stdio.h>
#include <string.h>

int main() {
    char s[100001], t[100001];
    
    // Read input strings
    fgets(s, sizeof(s), stdin);
    fgets(t, sizeof(t), stdin);
    
    // Remove newline character from both strings
    s[strcspn(s, "\n")] = 0;
    t[strcspn(t, "\n")] = 0;
    
    // Print length of S and T separated by space
    printf("%d %d\n", strlen(s), strlen(t));
    
    // Print S and T separated by a space
    printf("%s %s\n", s, t);
    
    return 0;
}