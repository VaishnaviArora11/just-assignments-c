//                                                        Question 59 : Rectangular Block

// A textile design software prints rectangular block patterns. 
// Implement a solution to display: 
//             ******   
//             ******   
//             ******   
//             ******   
//             ******   
//             ******


#include <stdio.h>

int main(){
    int n = 5;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            printf("*");
        }
        printf("\n");
    }
}

