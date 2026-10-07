//                                              Question 5 : Prime Number Check 
 
// Given a positive integer n, determine whether it is a prime number — a number greater than 1 that has no positive divisors other than 1 and itself. 
// Example 1 
//   Input: n = 7    
//   Output: true 
// Constraints 
//   • 1 <= n <= 10^6 


   
#include <stdio.h>
int main(){
    int n;
    int factors = 0;
    printf("Enter n : ");
    scanf("%d", &n);
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            factors++;
            break;
        } else {
            continue;
        }
    }
    if(factors >= 1){
        printf("True");
    } else {
        printf("False");
    }
}
