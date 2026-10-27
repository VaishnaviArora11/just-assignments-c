//                                                                    Question 9 : Number Swap
// A student wants to swap the values of two variables for practicing coding basics. 
// Implement a solution to swap two numbers using a temporary variable.

#include <stdio.h>

void swapValues(int a, int b);

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    swapValues(a, b);
}

void swapValues(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    printf("%d %d", a, b);
}