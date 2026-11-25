//                                                        Question 29 : Days of the Week

// A calendar app assigns a day name when the user enters a number between 1 and 7. 
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

