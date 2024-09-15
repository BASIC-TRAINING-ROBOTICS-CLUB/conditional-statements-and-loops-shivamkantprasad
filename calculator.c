//
// Created by shiva on 13-09-2024.
//
#include<stdio.h>

float add(float a, float b){
    return(a+b);
}
float sub(float a, float b){
    return(a+b);
}
float mult(float a, float b){
    return(a+b);
}
float divide(float a, float b){
    return(a/b);
}
int main(){
    float a, b;
    scanf("%f %f", &a, &b);
    printf("the sum is %f \n", add(a,b));
    printf("the subtraction is %f\n", sub(a,b));
    printf("the multiplication is %f\n", mult(a,b));
    printf("the divide is %f\n", divide(a,b));
}