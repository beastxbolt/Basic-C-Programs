/* 
Greatest of 3 numbers
written by Hasan Imam 
*/
#include <stdio.h>

int main(){
int a = 3;
int b = 9;
int c = 65;

int great = (a>b && a>c)?a:(b>c && b>a)?b:c;

printf("Greatest number: %d", great);
}