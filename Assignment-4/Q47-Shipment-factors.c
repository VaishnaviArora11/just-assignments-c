//                                                        Question 47 : Shipment Factors
// A logistics system checks all possible box sizes (factors) that fit into a shipment. 
// Implement a solution to accept a number and display its factors. 

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        if (n % i == 0){
            printf("%d, ", i);
        }
    }
}

