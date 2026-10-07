//                                     Question 2 : Factorial of a Number 

// Given a non-negative integer n, return its factorial, defined as: n! = n × (n-1) × (n-2) × ... × 1 
// By definition, 0! = 1. 
// Example :
//   Input: n = 5     
//   Output: 120 
//   Explanation: 
//      5! = 5 × 4 × 3 × 2 × 1 = 120. 


   
#include <stdio.h>
int main(){
    int n;
    int product = 1;
    printf("Enter a number : ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        product = product * i;
    }
    printf("%d", product);
}