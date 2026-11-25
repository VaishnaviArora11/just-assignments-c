//                                                        Question 50 : Reverse for Checksum

// A banking app verifies transaction IDs by reversing digits for checksum validation. 
// Implement a solution to accept a number and display its reverse.

#include <stdio.h>

int main(){
    int n, reverse = 0, digit;
    scanf("%d", &n);
    int x = n;
    while (n > 0){
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }
    printf("%d", reverse);
}

