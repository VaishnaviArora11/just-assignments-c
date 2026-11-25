//                                                        Question 46 : Cybersecurity Prime

// A cybersecurity tool verifies prime numbers used in encryption keys. 
// Implement a solution to accept a number and check whether it is prime. 

#include <stdio.h>

int main(){
    int n, prime = 0;
    scanf("%d", &n);
    for(int i = 2; i < n; i++){
        if (n % i == 0){
            prime++;
        }
    }
    if (prime > 0){
        printf("%d is not a prime number", n);
    } else {
        printf("Its a prime number");
    }
    
}

