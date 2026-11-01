//                                                        Question 15. Smart Home Controller

// A smart home controller checks if the number of devices ON is even or odd. 
// Implement a solution to accept a number and determine if it is even or odd.  


#include <stdio.h>

void evenOdd(int a);

int main(){
    int a;
    scanf("%d", &a);
    evenOdd(a);
}

void evenOdd(int a){
    if (a % 2 == 0){
        printf("Even");
    } else {
        printf("Odd");
    }
}