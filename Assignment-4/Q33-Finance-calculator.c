//                                                        Question 33 : Finance Calculator

// A finance calculator performs basic operations on two amounts (add, subtract, multiply, divide).
// Implement a solution to compute based on user’s choice. 

#include <stdio.h>
#include <math.h>

int main(){
    int num1, num2;
    char operation;
    printf("Enter a number :");
    scanf("%d %d", &num1, &num2);
    printf("Enter operation : ");
    scanf(" %c", &operation);
    if (operation == '+'){
        printf ("%d", num1 + num2);
    } else if (operation == '-'){
        printf ("%d", num1 - num2);
    } else if (operation == '*'){
        printf ("%d", num1 * num2);
    } else if (operation == '/'){
        printf("%d", num1 / num2);
    }
}

