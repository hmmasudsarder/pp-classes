#include <stdio.h>

void print_char(int count, char ch) {
    for (int i = 0; i < count; i++) {
        printf("%c", ch);
    }
}

void space_print(int count) {
    for (int i = 0; i < count; i++) {
        printf(" ");
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int star_tacker = 1;
    int space_tacker = n - 1;

    char chars[101]; // to store characters used in top part

    // First part (top)
    for (int i = 0; i < n; i++) {
        space_print(space_tacker);
        if (i % 2 == 0) {
            print_char(star_tacker, '#');
            chars[i] = '#';
        } else {
            print_char(star_tacker, '-');
            chars[i] = '-';
        }
        printf("\n");
        space_tacker--;
        star_tacker += 2;
    }

    // Second part (bottom)
    star_tacker -= 2; // reset to last used in top
    space_tacker = 0;
    for (int i = n - 2; i >= 0; i--) {
        star_tacker -= 2;
        space_tacker++;
        space_print(space_tacker);
        print_char(star_tacker, chars[i]);
        printf("\n");
    }

    return 0;
}
