//                                                        Question 22 : Contestant and Judge

// A contest judge finds the top scorer among three contestants. 
// Implement a solution to compute the largest of three numbers


#include <stdio.h>

int topScorer(int a, int b, int c);

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", topScorer(a, b, c));
}

int topScorer(int a, int b, int c){
    int largest;
    if (a > b){
        largest = a;
    } else {
        largest = b;
    } if (largest < c){
        largest = c;
    }
    return largest;
}