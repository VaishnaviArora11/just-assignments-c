//                                     Question 3 : Geometrical Series Sum 
 
// Given the first term a, the common ratio r, and the number of terms n of a geometric series, return the sum of its first n terms: 
//   a + a·r + a·r² + ... + a·r^(n-1) 
// Example 1 
//   Input: a = 2, r = 3, n = 4          
//   Output: 80 
//   Explanation: 
//      Terms are 2, 6, 18, 54. Sum = 80. 
// Constraints 
//   • 1 <= a <= 100 
//   • 1 <= r <= 10 
//   • 1 <= n <= 10 
//   • The result fits in a 64-bit signed integer (long long). 


   
#include <stdio.h>
int main(){
    int a, r, n;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter r : ");
    scanf("%d", &r);
    printf("Enter n : ");
    scanf("%d", &n);
    long long int sum = 0;
    int terms = 1; 
    if(1 <= a && a <= 100 && 1 <= r && r <= 10 && 1 <= n && n <= 10){
        for (int i = 1; i <= n; i++){
            sum += a * terms;
            terms *= r;
        }
    }
    printf("%lld", sum);
}
