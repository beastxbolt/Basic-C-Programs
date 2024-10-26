/* 
Conditionals main file
written by Hasan Imam 
*/
#include <stdio.h>
#include "oddEven.c"
#include "weekDays.c"
#include "vowels.c"
int main(){

oddEven(73);
printf("\n");
weekDays(362);
printf("\n");
vowels('a');
//getch();
// Tip: only use getch() when using older versions of shell or using windows executable

return 0;
}