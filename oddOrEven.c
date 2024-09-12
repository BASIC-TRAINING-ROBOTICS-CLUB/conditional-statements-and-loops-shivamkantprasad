#include "stdio.h"


int main(){
    int number;
    scanf("%d", &number);
    if(number%2){
        printf("Number is odd");
    }else{
        printf("Number is even");
    }
    return 0;
}