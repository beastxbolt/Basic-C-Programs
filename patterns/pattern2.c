/*
Enter number of rows: 7

1
12
123
1234
12345
123456
1234567
*/


#include <stdio.h>

int main(){
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);

    for(int i=0; i<=n;i++){
        for(int j=1; j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
//getch();
return 0;
}

