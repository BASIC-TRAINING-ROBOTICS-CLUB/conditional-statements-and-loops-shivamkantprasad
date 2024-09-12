//
// Created by shiva on 09-09-2024.
//
#include <stdio.h>

int main(){
    int side1,side2,side3;
    printf("enter the length of hypotenuse\n");
    scanf("%d",&side3);
    printf("enter the length of side\n");
    scanf("%d",&side1);
    printf("enter the length of side\n");
    scanf("%d",&side2);
    if((side3*side3) == ((side1*side1)+(side2*side2))){ //c^2 == a^2 + b^2 then the triangle is right angle(pythogoras)
        printf("the triangle is right angle");
    }
}