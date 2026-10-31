//                                                        Question 13. Software for powers

// A software tool for mathematics teachers needs a feature where students can quickly calculate powers of numbers. 
// Implement a solution to accept two numbers x and y, and compute x raised to the power y. 


#include <stdio.h>

int pow(int a);

int main(){
    int a;
    scanf("%d", &a);
    printf("%d", pow(a));
}

int pow(int a){
    return a * a;
}