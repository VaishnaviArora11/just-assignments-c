//                             Question 7 : Total Marks and Percentage  

// Implement a C program to accept marks obtained in five subjects, where each subject is out of 100. 
// Calculate and display:
//   • Total Marks 
//   • Percentage 
// Ensure that the percentage is displayed correctly as a decimal value.



#include <stdio.h>
int main(){
    int subj_1, subj_2, subj_3, subj_4, subj_5;
    printf("Enter Marks of First Subject : ");
    scanf("%d", &subj_1);
    printf("Enter Marks of Second Subject : ");
    scanf("%d", &subj_2);
    printf("Enter Marks of Third Subject : ");
    scanf("%d", &subj_3);
    printf("Enter Marks of Fourth Subject : ");
    scanf("%d", &subj_4);
    printf("Enter Marks of Fifth Subject : ");
    scanf("%d", &subj_5);
    float percentage = (subj_1 + subj_2 + subj_3 + subj_4 + subj_5) * 100 / (5.0 * 100);
    printf("%f", percentage);
}