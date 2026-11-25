//                                                        Question 36. Online Exam
// An online exam system computes grades based on percentage. 
// Implement a solution to accept percentage and assign :
//       -> Grade ‘A’ if ≥75 
//       -> Grade ‘B’
// use conditional operator. 

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

