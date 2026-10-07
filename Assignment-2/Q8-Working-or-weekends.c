//                                    Question 8 : Day Number → Working Day / Weekends 

// Take a number from 1 to 7 and use switch: 
//   1 → Monday 
//   2 → Tuesday 
//       ... 
//   7 → Sunday 
// Along with the day name, print: 
//   • Working Day for Monday–Friday  
//   • Weekend for Saturday–Sunday  
// For any other number, print Invalid Day.


   
#include <stdio.h>

int main(){
    int day_num;
    printf("Enter Day Number : ");
    scanf("%d", &day_num);
    switch(day_num){
        case 1 :
            printf("Monday\n");
            printf("Weekday\n");
            break;
        case 2 :
            printf("Tuesday\n");
            printf("Weekday\n");
            break;
        case 3 :
            printf("Wednesday\n");
            printf("Weekday\n");
            break;
        case 4 :
            printf("Thursday\n");
            printf("Weekday\n");
            break;
        case 5 :
            printf("Friday\n");
            printf("Weekday\n");
            break;
        case 6 :
            printf("Saturday\n");
            printf("Weekend\n");
            break;
        case 7 :
            printf("Sunday\n");
            printf("Weekend\n");
            break;
        default : 
            printf("Invalid Day\n");
            break;
    }
}

