//
// Created by shiva on 09-09-2024.
//

#include <stdio.h>

int main(){
    int side1,side2,side3;
    printf("enter the length of side\n");
    scanf("%d",&side1);
    printf("enter the length of side\n");
    scanf("%d",&side2);
    printf("enter the length of side\n");
    scanf("%d",&side3);
    if(side1==side2 && side3==side2){
        printf("the triangle is equlateral");
    }
}