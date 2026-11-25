//                                                        Question 38 : Top Applicant

// A recruitment system checks which candidate scored the highest among three applicants. 
// Implement a solution to accept three numbers and display the largest. 

#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int largest = 0;
    if (a > b){
        largest = a;
    } else if (b > a){
        largest = b;
    } 
    if (largest < c){
        largest = c;
    } 
    printf("The top applicant is : %d", largest);
}

