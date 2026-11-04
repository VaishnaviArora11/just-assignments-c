//                                                        Question 20 : Item Discount

// A wholesale supplier applies 10% discount if order > 1000 items. 
// Implement a solution to compute total expenses and apply discount accordingly.


#include <stdio.h>

float orderDiscount(int item);

int main(){
    int item;
    scanf("%d", &item);
    printf("%f", orderDiscount(item));
}

float orderDiscount(int item){
    if (item >= 1000){
        return item - (item * 0.1);
    } else {
        return item;
    }
}