#include <stdio.h>
int sumOfDigits(int input)
{
    int sum = 0;
    int remaining = input;

    while (remaining > 0)
    {
        int unitPlace = remaining % 10;
        sum = sum + unitPlace;
        remaining /= 10;
    }

    return sum;
}

int main()
{
    int n = 321;
    int sumNum = sumOfDigits(n);
    printf("Sum of digits of %d is: %d", n, sumNum);
}
