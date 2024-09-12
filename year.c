//
// Created by shiva on 10-09-2024.
//

#include <stdio.h>

int main(){
    int year;
    printf("Enter a year.\n");
    scanf("%d", &year);
    if(year > 2000){
        printf("the year is after the year 2000\n");
    }else{
        printf("the year is before of the year 2000\n");
    }
    if(year%4 == 0){
        printf("the year is a leap year");
    }else{
        printf("the year is not leap year");
    }
    return 0;
}