//
// Created by shiva on 11-09-2024.
//

#include <stdio.h>

int main(){
    char vowels [5] = {'a','e', 'i', 'o',  'u'};
    char letter;
    int x;
    printf("please enter a letter.\n");
    scanf("%c", &letter);
    for(x=0; x<5; x++){
        if (letter == vowels[x]){
            printf("The letter \"%c\" is a vowel\n", letter);
            break;
        }
    }
    if(x == 5){
        printf("The letter \"%c\" is a consonants\n", letter);
    }
    return 0;
}