//                                                        Question 23 : Engineering Calculator

// An engineering calculator evaluates the type of roots of quadratic equations. 
// Implement a solution to check whether roots are: 
//    i) Real and Unequal 
//    ii) Real and Equal 
//    iii) Imaginary 


#include <stdio.h>

void calculator(int a, int b, int c);

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    calculator(a, b, c);
}

void calculator(int a, int b, int c){
    int quad;
    quad = (b * b) - (4 * a * c);
    if(quad > 0){
        printf("Real and Unequal");
    } else if (quad = 0){
        printf("Real and Equal");
    } else{
        printf("Imaginary");
    }
}