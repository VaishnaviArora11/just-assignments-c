//                             Question 4 : Triangle Validator

// Given three angles a, b, and c, implement a program to determine:
//   • Invalid if their sum is not 180 or any angle is 0 or negative.
//   • Acute if all three angles are less than 90.
//   • Right if exactly one angle is 90.
//   • Obtuse otherwise.  
   



#include <stdio.h>
int main(){
    int a, b, c;
    printf("Enter first angle : ");
    scanf("%d", &a);
    printf("Enter second angle : ");
    scanf("%d", &b);
    printf("Enter third angle : ");
    scanf("%d", &c);
    int sum = a + b + c;
    if(sum != 180 || a <= 0 || b <= 0 || c <= 0){
        printf("Invalid");
    } else if (a < 90 && b < 90 && c < 90){
        printf("Acute");
    } else if (a == 90 || b == 90 || c == 90){
        printf("Right");
    } else{
        printf("Obtuse");
    }
}

