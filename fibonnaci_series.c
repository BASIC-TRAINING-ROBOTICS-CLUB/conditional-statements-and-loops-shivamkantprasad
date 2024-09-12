//
// Created by shiva on 11-09-2024.
//
#include "stdio.h"

int main(){
    int n;
    unsigned long long int num1=0,num2=1, sum;
    printf("enter the how many fibonnaci values you want.\n");
    scanf("%d",&n);
    for(int x = 0; x<n; x++){
        printf(" %llu",num2);
        sum = num1 + num2;
        if(sum<num2){
            printf("\n \033[1;31m The number you entered is too big \033[1;0m");
            break;
        }
        num1 = num2;
        num2 = sum;
    }
    return 0;
}