//                                  Question 5 : Swap Two Numbers  

// Implement a C program to accept two integer values and swap their values using a third variable. 
// Display the values: 
//   • Before swapping 
//   • After swapping 
// Example: 
//   Before swapping: 10 20  
//   After swapping: 20 10  



#include <stdio.h>
int main(){
    int a, b, temp;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);
    temp = a;
    a = b;
    b = temp;
    printf("%d %d", a, b);
}