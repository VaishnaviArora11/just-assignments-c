//                                                        Question 31 : Schedular Program

// A scheduler program uses a switch-case structure to assign day names from numbers (1–7). 
// Implement a solution to display the corresponding day of the week.

#include <stdio.h>
#include <math.h>

int main(){
    int day;
    scanf("%d", &day);
    switch (day)
    {
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
    default:
        printf("Invalid Input");
        break;
    }
}

