// fibbonaci series
#include <stdio.h>
int main()
{
    int n, first = 0, second = 1, next, c;
    printf("Enter the number of terms\n");
    scanf("%d", &n);
    printf("First %d terms of Fibonacci series are:\n", n);
    for (c = 0; c < n; c++)
    {
        if (c <= 1)
            next = c; // special case for first two terms
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d\n", next);
    }
    return 0;
}
/*
Logic:
0, 1, 1, 2, 3, 5, 8, 13, 21, 34,

c = a + b;
a = b;
b = c;

*/