//
// Created by shiva on 11-09-2024.
//
#include <stdio.h>

int main(){
    int number;
    printf("Enter a number \n");
    scanf("%d", &number);
    printf("the divisors of the number %d are\n", number);
    for(int x = 1; x < number; x++){
        if(number%x == 0){
            printf(" %d,", x);
        }
    }
    printf(" %d", number);
    return 0;
}