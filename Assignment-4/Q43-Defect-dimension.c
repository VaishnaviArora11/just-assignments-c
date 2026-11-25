//                                                        Question 43 : Defect Dimension

// A quality check tool identifies the smallest defect dimension out of three measurements. 
// Implement a solution to display the smallest of three numbers. 

#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int smallest = a < b ? a : b;
    smallest = smallest < c ? smallest : c;
    printf("%d", smallest);
}

