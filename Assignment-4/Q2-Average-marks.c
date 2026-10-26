//                                                    Question 2 : Average Marks

// A teacher wants to find the average marks of three students to decide class performance. 
// Implement a solution to accept three numbers and compute their average. 

#include <stdio.h>

int avgMarks(int a, int b, int c){
    return (a + b + c) / 3;
}

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", avgMarks(a, b, c));
}