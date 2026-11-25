//                                                        Question 35 : No if-else

// A coding exercise requires finding the larger of two inputs without using if-else. 
// Implement a solution to compute largest of two numbers using conditional operator.

#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int largest = a > b ? a : b;
    printf("%d", largest);
}

