//                                                        Question 25 : Admission Portal

// An admission portal decides eligibility based on marks in three subjects. 
// Implement a solution to classify the student into a Degree, Diploma, or Certificate course.
//    -> 60% and above: Degree
//    -> 45% to 59.9%: Diploma
//    -> Below 45%: Certificate

#include <stdio.h>

void admissionPortal(int subA, int subB, int subC);

int main(){
    float subA, subB, subC;
    scanf("%f %f %f", &subA, &subB, &subC);
    admissionPortal(subA, subB, subC);
}

void admissionPortal(int subA, int subB, int subC){
    int percentage = (subA + subB + subC) / 3;
    if(percentage >= 60){
        printf("Degree");
    } else if (percentage >= 45 && percentage < 60){
        printf("Diploma");
    } else {
        printf("Certification");
    }
}