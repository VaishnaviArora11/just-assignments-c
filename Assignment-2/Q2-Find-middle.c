//                           Question 2 : Find Middle of Three

// Implement a program that takes three different integers a, b, and c and prints the middle value (neither maximum nor minimum). 
// Example: 
//    Input: 10 25 15 
//    Output: 15 



#include <stdio.h>
int main(){
    int a, b, c;
    int max, min, middle;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);
    printf("Enter third number : ");
    scanf("%d", &c);
    if (a > b){
        max = a;
        min = b;
    } else if (a < b){
        max = b;
        min = a;
    } 
    if (c < min){
        middle = min;
        min = c;
    } else if(max < c){
        middle = max;
        max = c;
    } else {
        middle = c;
    }
    printf("%d", middle);
}