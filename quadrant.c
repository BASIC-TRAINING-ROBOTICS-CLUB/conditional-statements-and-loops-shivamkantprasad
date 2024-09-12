//
// Created by shiva on 09-09-2024.
//
#include "stdio.h"

int main(){
    int x,y;
    scanf("%d", &x);
    scanf("%d", &y);
    if(x>0 && y>0){
        printf("Your Quadrant is 1");
    }else if(x>0 && y<0){
        printf("Your Quadrant is 2");
    }else if(x<0 && y<0){
        printf("Your Quadrant is 3");
    }else if(x<0 && y>0){
        printf("Your Quadrant is 4");
    }else if(x==y==0){
        printf("Point is origin");
    }else{
        printf("point is on cordinate axis");
    }
}