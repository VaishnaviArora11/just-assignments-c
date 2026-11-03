//                                                        Question 17. Text Editor 

// A text editor auto-detects whether an input letter is a vowel or consonant. 
// Implement a solution to classify the character.   


#include <stdio.h>

char textEditor(char alphabet);

int main(){
    char alphabet;
    scanf("%c", &alphabet);
    textEditor(alphabet);
}

char textEditor(char alphabet){
    if (alphabet == 65 || alphabet == 69 || alphabet == 73 || alphabet == 79 || alphabet == 85 || alphabet == 97 || alphabet == 101 || alphabet == 105 || alphabet == 111 || alphabet == 117){
        printf("Input is Vowel");
    } else {
        printf("Input is Consonant");
    }
}