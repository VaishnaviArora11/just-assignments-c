//                                                        Question 51. Rocket Launch Countdown

// A countdown system shows the remaining seconds before a rocket launch. Implement a solution to 
// display numbers 1–10 in reverse order.

#include <stdio.h>

int main(){
    int n = 10;
    while (n >= 0){
        printf("%d\n", n);
        n--;
    }
}

