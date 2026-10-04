//                                  Question 6 : Calculate Quotient and Remainder  

// Implement a C program to accept two integers and calculate:
//   • Quotient 
//   • Remainder 
// Use appropriate arithmetic operators and display both results. 
// Example: 
//   Input: 17 5 
//   Quotient = 3 
//   Remainder = 2



#include <stdio.h>
int main(){
    int Quotient, Remainder, a, b;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);
    Quotient = a / b;
    Remainder = a % b;
    printf("Quotient = %d\nRemainder = %d", Quotient, Remainder);
}