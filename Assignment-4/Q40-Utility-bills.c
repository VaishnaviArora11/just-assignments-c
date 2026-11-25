//                                                        Question 40 : Utility Bills

// A utility company computes customer bills based on units consumed. 
// Implement a solution to accept number of units consumed and calculate bill using given rates.
// 2 per unit

#include <stdio.h>

int main(){
    int units;
    scanf("%d", &units);
    printf("Bill : %d", units * 2);
}

