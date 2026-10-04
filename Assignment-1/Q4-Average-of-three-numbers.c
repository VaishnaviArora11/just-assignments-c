//                             Question 4 : Average of Three Numbers 

// Implement a C program to accept three integer values and calculate their average. 
// Ensure that the average is displayed as a decimal value, even when all input values are integers.
// Example: 
//   Input: 10 15 20 
//   Output: Average = 15.00 



#include <stdio.h>
int main(){
    int num_1, num_2, num_3;
    printf("Enter first number : ");
    scanf("%d", &num_1);
    printf("Enter second number : ");
    scanf("%d", &num_2);
    printf("Enter third number : ");
    scanf("%d", &num_3);
    float Average = (num_1 + num_2 + num_3) / 3.0;
    printf("%f", Average);
}


