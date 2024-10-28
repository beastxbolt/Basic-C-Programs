#include <stdio.h>

int main(){
    int n = 35;
    // circular switch case
    int day = n%7;
    switch(day){
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        case 0:
        // speacial case for 0
            printf("Sunday");
            break;
        default:
            printf("Invalid Input");
    }
    
}