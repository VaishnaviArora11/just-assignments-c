//                                                        Question 55 : Reverse Seating 

// A digital board displays reverse seating layouts for events. 
// Implement a solution to print: 
//             5 4 3 2 1   
//             5 4 3 2   
//             5 4 3   
//             5 4   
//             5 


#include <stdio.h>

int main(){
    int n = 5, x = 5;
    for (int i = 1; i <= n; i++){
        for (int j = x; j >= i; j--){
            printf("%d ", j);
        }
        printf("\n");
    }
}

