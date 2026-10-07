//                             Question 5 : Simple Calculator Using Switch

// Take two numbers and an operator (+, -, *, /, %) and perform the corresponding operation using switch. 
// For division:
//   • If the second number is 0, print Cannot divide by zero.  
// Example:
//   Input: 15 4 %
//   Output: 3   
   



#include <stdio.h>
int main(){
    int a, b;
    char operatr;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);
    printf("Enter Operator : ");
    scanf(" %c", &operatr);
    switch(operatr){
        case '+' : 
             printf("%d", a + b);
             break;
        case '-' : 
             printf("%d", a - b);
             break;
        case '*' : 
             printf("%d", a * b);
             break;
        case '/' : 
             if (b == 0)
             printf("%d", a / b);
             break;
        case '%' : 
             printf("%d", a % b);
             break;
    }
}

