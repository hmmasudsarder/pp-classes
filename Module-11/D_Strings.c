#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

void swap_first_chars(char *str1, char *str2);

int main() {
    char str1[MAX_LENGTH];
    char str2[MAX_LENGTH];

  
    scanf("%s %s", str1, str2);

    
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    
    printf("%d %d\n", len1, len2);

    
    char concatenated[MAX_LENGTH];
    strcpy(concatenated, str1);
    strcat(concatenated, str2);
    printf("%s\n", concatenated);

    swap_first_chars(str1, str2);

    
    printf("%s %s\n", str1, str2);

    return 0;
}

void swap_first_chars(char *str1, char *str2) {
    char temp = str1[0];
    str1[0] = str2[0];
    str2[0] = temp;
}