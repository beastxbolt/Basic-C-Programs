#include <stdio.h>
int reverse();
void palindrome();
int main() {
    int n = 365;
    int reversedNum = reverse(n);
    printf("Reverse of %d is: %d",n, reversedNum);
    palindrome(n);
}
int reverse(int input) {
    int reversed = 0;  
    int remaining = input;  

    while (remaining > 0) {
        int unitPlace = remaining % 10;     
        reversed = 10 * reversed + unitPlace; 
        remaining /= 10;                    
    }

    return reversed;
}
void palindrome(int k){
    if(k==reverse(k)){
        printf("\nNumber is palindrome");
    } 
    else
        printf("\n NOT a palindrome");
}