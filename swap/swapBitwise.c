/* 
swap 2 numbers with  XOR
written by Hasan Imam 
*/
#include <stdio.h>

int main(){
int a = 3;
int b = 2;
int temp;

a = a^b;
b = a^b; 
a = a^b; 
printf("Swapped value of A: %d \nSwapped value of B: %d",a, b);
//getch();
// Tip: only use getch() when using older versions of shell or using windows executable
return 0;
}