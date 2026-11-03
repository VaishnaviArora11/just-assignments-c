//                                                        Question 18 : February Days 

// A calendar app calculates whether February has 29 days. 
// Implement a solution to check if a year is leap or non-leap.  


#include <stdio.h>

void leapYearCheckers(int year);

int main(){
    int year;
    scanf("%d", &year);
    leapYearCheckers(year);
}

void leapYearCheckers(int year){
    if (year % 4 == 0){
        printf("February : 29 Days");
    } else {
        printf("February : 28 Days");
    }
}