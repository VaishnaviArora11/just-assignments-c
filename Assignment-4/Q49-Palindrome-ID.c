//                                                        Question 49 : Palindrome ID

// A string matching tool validates if numerical IDs are palindromes. 
// Implement a solution to check whether a given number is a palindrome. 

#include <stdio.h>

int main(){
    int n, reverse = 0, digit;
    scanf("%d", &n);
    int x = n;
    while (n > 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }
    if(reverse == x){
        printf("Yes, it is");
    } else {
        printf("No, it isnt");
    }
}

