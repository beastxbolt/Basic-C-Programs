/*Enter number of rows: 5

1
11
111
1111
11111*/

#include <stdio.h>

int main(){
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);

    for(int i=0; i<=n;i++){
        for(int j=1; j<=i;j++){
            printf("1");
        }
        printf("\n");
    }
//getch();
return 0;
}