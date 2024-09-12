//
// Created by shiva on 09-09-2024.
//
#include <stdio.h>

int main(){
    int a;
    printf("enter a number\n");
    scanf("%d", &a);
    if(a>0){
        printf("this number is positive");
    }else if(a<0){
        printf("this number is negative");
    }else{printf("this number in zero");}
    return 0;
}