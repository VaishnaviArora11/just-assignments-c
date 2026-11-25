//                                                        Question 32 : Calculator

// A calculator app provides options to compute square, square root, or cube. 
// Implement a solution to operate based on the user’s choice.

#include <stdio.h>
#include <math.h>

int main(){
    int num, operation;
    printf("Enter a number :");
    scanf("%d", &num);
    printf("Enter operation (1 for sq, 2 for sq rt, 3 for cube) : ");
    scanf("%d", &operation);
    if (operation == 1){
        printf ("%d", pow(num, 2));
    } else if (operation == 2){
        printf ("%f", sqrt(num));
    } else if (operation == 3){
        printf ("%d", num * num * num);
    }
}

