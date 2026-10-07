//                                       Question 1 : Sum of Square Series

// Sum of Squares Series
// Given a positive integer n, calculate the sum of the series:
//   1² + 2² + 3² + 4² + ... + n²


   
#include <stdio.h>

int main(){
    int n;
    long long int sum = 0;
    printf("Enter n : ");
    scanf("%ld", &n);
    for(int i = 1; i <= n; i++){
        long long int product = 1;
        product = i * i;
        sum += product; 
    }
    printf("%lld", sum);
}