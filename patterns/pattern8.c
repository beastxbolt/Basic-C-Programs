/*

5
44
333
2222
11111
*/

#include <stdio.h>

int main(){
    int n=5;
    for(int i=0; i<n;i++){
        for(int j=0; j<=i;j++){
            printf("%d",n-i);
        }
        printf("\n");
    }
//getch();
return 0;
}