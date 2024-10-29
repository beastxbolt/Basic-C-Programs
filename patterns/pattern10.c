/*

      1
    2 3 2
  3 4 5 4 3
4 5 6 7 6 5 4

*/

#include<stdio.h>

int main() {
    int i, j, k, a, n = 4;
    // clrscr();

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= (n - i); j++) {
            printf("  ");
        }

        for (k = 1, a = i; a >= i; k++) {
            printf("%d ", a);

            if ((k + i) > (2 * i) - 1) {
                a--;
            } else {
                a++;
            }
        }
        printf("\n");
    }
    // getch();
    return 0;
}