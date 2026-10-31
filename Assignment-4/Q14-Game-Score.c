//                                                        Question 14. Game Score

// A game compares two player scores to find who is ahead. 
// Implement a solution to accept two numbers and display the largest. 


#include <stdio.h>

int winner(int a, int b);

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", winner(a, b));
}

int winner(int a, int b){
    if (a > b){
        return a;
    } else {
        return b;
    }
}