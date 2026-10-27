//                                                                    Question 8 : Discounted Bill 
// A shopkeeper wants to calculate the total bill amount after applying a 20% discount on the purchase. 
// Implement a solution to accept item no., quantity, and unit price. Compute the amount and apply 20% discount.

#include <stdio.h>

float billTotal(int quantity, float unitPrice);

int main(){
    int itemno, quantity;
    float unitPrice;
    scanf("%d %d %f", &itemno, &quantity, &unitPrice);
    printf("The Total Bill for item no %d is : %f", itemno, billTotal(quantity, unitPrice));
}

float billTotal(int quantity, float unitPrice){
    return quantity * unitPrice;
}