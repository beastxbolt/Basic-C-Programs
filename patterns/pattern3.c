/*Enter number of rows: 8

1
22
333
4444
55555
666666
7777777
88888888

*/

#include <stdio.h>

int main(){
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);

    for(int i=0; i<=n;i++){
        for(int j=1; j<=i;j++){
            printf("%d",i);
        }
        printf("\n");
    }
//getch();
return 0;
}