//                                                        Question 52 : Simple Interest

// A bank software computes simple interest for multiple loan accounts. 
// Implement a solution to calculate SI for 3 sets of P, R, and N.

#include <stdio.h>

int main(){
    int p, r, t;
    scanf("%d %d %d", &p, &r, &t);
    printf("%d", p * r * t / 100);
}

