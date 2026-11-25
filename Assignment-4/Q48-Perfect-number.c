//                                                        Question 48 : Perfect Number

// A math learning app demonstrates perfect numbers to students. 
// Implement a solution to accept a number and check if it is a perfect number. 

#include <stdio.h>

int main(){
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 1; i < n; i++){
        if (n % i == 0){
            sum += i;
        }
    }
    if (sum == n){
        printf("Its a perfect Number");
    } else {
        printf("Not a perfect Number");
    }
}

