//                                                                    Question 10 : Number Swap Without Third Variable

// A programmer wants to optimize memory and avoid using extra variables while swapping two values. 
// Implement a solution to swap two numbers without using a third variable. 

#include <stdio.h>

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