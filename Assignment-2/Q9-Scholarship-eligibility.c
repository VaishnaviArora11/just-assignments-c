//                                       Question 9 : Scholarship Eligbility

// A student is eligible for a scholarship if: 
//   • Marks are at least 75  
//   • Attendance is at least 75%  
// However: 
//   • If marks are 90 or above and attendance is at least 70%, print Special Scholarship.  
//   • Otherwise, if both normal conditions are satisfied, print Eligible.  
//   • Else print Not Eligible.  
// Example: 
//   Input: 
//   Marks = 92 
//   Attendance = 72 
//   Output: Special Scholarship 


   
#include <stdio.h>

int main(){
    int marks, attendance;
    printf("Enter Marks : ");
    scanf("%d", &marks);
    printf("Enter Attendance : ");
    scanf("%d", &attendance);
    if (marks >= 75 && marks <= 100 && attendance >= 75 && attendance <= 100){
        if (marks >= 90 && marks <= 100 && attendance >= 70 && attendance <= 100){
            printf("Special Scholarship");
        } else {
            printf("Eligible");
        }
    } else {
        printf("Not Eligible");
    }
}