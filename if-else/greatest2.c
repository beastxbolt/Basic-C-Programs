/* 
Greatest of 4 numbers
written by Hasan Imam 
*/
#include <stdio.h>

int main(){
int a = 3;
int b = 9;
int c = 65;
int d = 193;

if(a>b && a>c && a>d){
    printf("Greatest number: %d", a);
}
else if(b>c && b>a && b>d){
    printf("Greatest number: %d", b);
}
else if(c>a && c>b && c>d){
    printf("Greatest number: %d", c);
}
else{
    printf("Greatest number: %d", d);
}

return 0;
}