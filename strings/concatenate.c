#include<stdio.h>

int main() {
    char str1[6] = "Story", str2[5] = "Book", str3[10] = "";
    int str1len = (sizeof(str1) / sizeof(str1[0])) - 1;
    int str2len = (sizeof(str2) / sizeof(str2[0])) - 1;
    int i, j;
    // clrscr();

    for (i = 1; i <= str1len; i++) {
        str3[i - 1] = str1[i - 1];
    }
    
    for (j = 1; j <= str2len; j++) {
        str3[(str1len + j) - 1] = str2[j - 1];
    }

    printf("%s", str3);
    // getch();
    return 0;
}