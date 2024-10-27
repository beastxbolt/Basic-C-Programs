#include <stdio.h>
/*
int factorialRecursion(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}*/

int factorial(int n)
{
    // Logic: 5! = 1*2*3*4*5 = 120
    int i, fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial of %d using iteration is %d\n", n, factorial(n));
    return 0;
}