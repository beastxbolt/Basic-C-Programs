/* 
swap 2 numbers with 3rd variable
written by Hasan Imam 
*/
#include <stdio.h>

int main(){
int a = 5;
int b = 9;
int temp;

temp = a;
a=b;
b=temp;

printf("Swapped value of A: %d \nSwapped value of B: %d",a, b);
//getch();
// Tip: only use getch() when using older versions of shell or using windows executable
}