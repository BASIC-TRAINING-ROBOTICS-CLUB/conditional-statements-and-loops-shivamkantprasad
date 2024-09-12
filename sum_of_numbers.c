//
// Created by shiva on 11-09-2024.
//

#include <stdio.h>

int main(){
    int number, sum=0;
    printf("enter a number\n");
    scanf("%d",&number);
    while(number!=0){
        sum += number%10;
        number -= number%10;
        number /= 10;
    }
    printf("The sum of the digits in the number is %d", sum);
}