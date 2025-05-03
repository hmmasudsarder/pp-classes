#include <stdio.h>
#include <string.h>
int is_palindrome(char str[]) {

    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            return 0;
        }
        start++;
        end--;
    }

    return 1;
}

int main() {
    char s[1001];
    scanf("%s", s);

    if (is_palindrome(s)) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    return 0;
}