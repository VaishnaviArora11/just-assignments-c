//                                                        Question 24 : Learning App

// A learning app gives different outputs based on the number type. 
// If the number is even → compute its square; else if odd → compute its cube.


#include <stdio.h>

int learningApp(int num);

int main(){
    int num;
    scanf("%d", &num);
    printf("%d", learningApp(num));
}

int learningApp(int num){
    if(num % 2 == 0){
        return num * num;
    } else{
        return num * num * num;
    }
}