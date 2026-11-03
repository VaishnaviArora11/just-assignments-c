//                                                        Question 16 : Store Offer

// A store runs offers when order size is divisible by both 3 and 5. 
// Implement a solution to check if a number is divisible by 3 and 5  


#include <stdio.h>

void storeOfferEligibility(int size);

int main(){
    int size;
    scanf("%d", &size);
    storeOfferEligibility(size);
}

void storeOfferEligibility(int size){
    if (size % 3 == 0 && size % 5 == 0){
        printf("Offer Eligible!");
    } else {
        printf("Offer Not Eligible");
    }
}