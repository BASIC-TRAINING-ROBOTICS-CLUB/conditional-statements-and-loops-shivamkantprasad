//
// Created by shiva on 11-09-2024.
//

#include <stdio.h>

int main(){
    int n;
    unsigned long long int value = 1;
    printf("enter the number to factorial\n");
    scanf("%d",&n);
    for(int x = n; x>0;x--){
        value *= x;
    }
    printf("the factorial of %d is\033[1;32m %llu \033[1;0m", n, value);
    return 0;
}