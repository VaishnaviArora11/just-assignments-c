//                                                        Question 19 : Vote Eligibility

// Election software verifies if a person is eligible to vote based on age and nationality. 
// Implement a solution to check voting eligibility.


#include <stdio.h>

void voteEligibility(int age);

int main(){
    int age;
    scanf("%d", &age);
    voteEligibility(age);
}

void voteEligibility(int age){
    if (age >= 18){
        printf("Eligibile");
    } else {
        printf("Not Eligible");
    }
}