//                                Question 3 : Electricity Bill Slab

// Implement a program to calculate the electricity bill based on units consumed: 
//   Units      :   Rate    
//   0–100      :   ₹2/unit
//   101–200    :   ₹3/unit
//   Above 200  :   ₹5/unit
// Use if-else ladder. 
// Example: 
//   Input: 250 
//   Output: 850 



#include <stdio.h>
int main(){
    int units, rate;
    printf("Enter Units consumed : ");
    scanf("%d", &units);
    if(units >= 0 && units <= 100){
        rate = units * 2;
    } else if (units >= 101 && units <= 200){
        rate = (100 * 2) + ((units - 100) * 3);
    } else if (units > 200){
        rate = (100 * 2) + (100 * 3) + ((units - 200) * 5);
    }
    printf("Total Bill : %d", rate);
}
