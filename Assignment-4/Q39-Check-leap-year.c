//                                                        Question 39 : Check Leap Year

// A calendar application validates if a given year has 366 days. 
// Implement a solution to accept a year and check whether it is a leap year or not.

#include <stdio.h>

int main(){
    int year;
    scanf("%d", &year);
    if (year % 4 == 0){
        printf("Number of days is 366");
    } else {
        printf("Number of days is 365");
    }
}

