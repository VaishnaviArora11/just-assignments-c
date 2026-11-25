//                                                        Question 44 : Scientific Calculator

// A scientific calculator computes the absolute magnitude of values irrespective of sign. 
// Implement a solution to accept an integer and display its absolute value. 

#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    if(a < 0){
        printf("%d", -a);
    } else {
        printf("%d", a);
    }
}

