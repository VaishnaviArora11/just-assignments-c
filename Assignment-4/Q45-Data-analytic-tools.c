//                                                        Question 45 : Data Analytic Tools

// A data analytics tool finds the maximum sales figure from multiple entries. 
// Implement a solution to accept ‘n’ numbers and display the largest. 

#include <stdio.h>

int main(){
    int n, x, largest;
    scanf("%d %d", &n, &x);
    largest = n > x ? n : x;
    printf("%d", largest);
}

