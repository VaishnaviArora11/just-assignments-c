//                                              Question 4 : Digit Count 
 
// Given a non-negative integer n, count the total number of digits in it. 
// Example 
//   Input: n = 12345       
//   Output: 5 
// Constraints 
//   • 0 <= n <= 10^9  


   
#include <stdio.h>
int main(){
    int n;
    int count = 0; 
    printf("Enter a number : ");
    scanf("%d", &n);
    do{
        n /= 10;
        count++;
    } while(n > 0);
    printf("%d", count);
}
