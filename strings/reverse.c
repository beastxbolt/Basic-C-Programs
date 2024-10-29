#include<stdio.h>

int main() {
    char name[5] = "Book", reversed[5] = "";
    int i, length = (sizeof(name) / sizeof(name[0])) - 1;
    // clrscr();

    for (i = 1; i <= length; i++) {
        reversed[i - 1] = name[length - i];
    }

    printf("String: %s\n", name);
    printf("Reversed: %s", reversed);
    // getch();
    return 0;
}