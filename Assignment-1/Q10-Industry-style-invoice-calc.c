//                       Question 10 : Industry-Style Invoice Calculator

// A company wants to generate a simple invoice for a customer. Implement a C program to accept:
//   • Product ID 
//   • Product Price 
//   • Quantity 
//   • Discount Percentage 
// Calculate the following: 
//   Subtotal = Price × Quantity 
//   Discount Amount = Subtotal × Discount Percentage / 100 
//   Final Amount = Subtotal − Discount Amount 
// Display the following details in a properly formatted manner: 
//   Product ID Subtotal Discount Amount Final Payable Amount 



#include <stdio.h>
int main(){
    int product_id, quantity;
    float price, discount;
    printf("Enter Product ID : ");
    scanf("%d", &product_id);
    printf("Enter Product Price : ");
    scanf("%f", &price);
    printf("Enter Quantity : ");
    scanf("%d", &quantity);
    printf("Enter Discount Percentage : ");
    scanf("%f", &discount);
    float subtotal = price * quantity;
    float discount_amount = subtotal * discount / 100;
    float final_amount = subtotal - discount;
    printf("Subtotal = %f\n", subtotal);
    printf("Discount Amount = %f\n", discount_amount);
    printf("Final Amount = %f\n", final_amount);
}