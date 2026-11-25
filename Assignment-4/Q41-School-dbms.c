//                                                        Question 41 : School DBMS

// A school management system assigns grades based on marks ranges. 
// Implement a solution to input marks and display Grade A, B, C, or Fail.

#include <stdio.h>

int main(){
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int percentage = (a + b + c + d)/4;
    if(percentage >= 75){
        printf("Grade A");
    } else {
        printf("Grade B");
    }
}

