//                                                        Question 30 : Batch Size

// In quality control, batch sizes must be divisible by a fixed standard size. 
// Implement a solution to check whether the first number is divisible by the second number.

#include <stdio.h>

void batchSize(int a, int b);

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    batchSize(a, b);
}

void batchSize(int a, int b){
    if (a % b == 0){
        printf("Good batch");
    } else {
        printf("Spoilt batch");
    }
}