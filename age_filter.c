//
// Created by shiva on 07-09-2024.
//
#include <stdio.h>

//date in form of dd, mm, yyyy
int date [] = {7, 9, 2024};
int b_date []= {12,8,2006};

int main(){
    int age = date[2] - b_date[2];
    if(date[1]<b_date[1]){
        age = age-1;
    }
    if(date[1] == b_date[1] && date[0] < b_date[0]){
        age-=1;
    }
    if(age>=18){
        printf("you are over 18");
    }else{
        printf("you are under 18");
    }
}



