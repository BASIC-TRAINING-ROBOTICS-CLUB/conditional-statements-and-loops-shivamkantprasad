//
// Created by shiva on 09-09-2024.
//

#include "stdio.h"

int main(){
    int a,b,c;
    printf("enter number a, b, c\n");
    scanf("%d %d %d",&a , &b, &c);
    if(a>b && a>c){
        printf("a is the biggest number which is %d", a);
    }else if(b>a && b>c){
        printf("b is the biggest number which is %d", b);
    }else if(c>a && c>b){
        printf("c is the biggest number which is %d", c);
    }else if(a==b && a==c){
        printf("all the numbers are equal which is %d", a);
    }else if(a==b){
        printf("the number a and b are the same");
    }else if(b==c){
        printf("the number b and c are the same");
    }else if(a==c){
        printf("the number a and c are the same");
    }else{printf("this edge case was not though by shivam");}
    return 0;
}