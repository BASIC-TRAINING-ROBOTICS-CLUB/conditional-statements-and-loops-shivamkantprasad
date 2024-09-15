//
// Created by shiva on 13-09-2024.
//

#include<stdio.h>

int main(){
    int arr[] = {5,6,85,435,85};
    int sum = 0;
    //getting the whole sum of array
    for(int x;x<5;x++){
        sum += arr[x];
    }


    printf("The sum of elements of the array ");
    //printing the array
    for (int y = 0; y < 5; y++) {
        printf("%d, ", arr[y]);
    }
    //printing the output
    printf("\b\b is %d ",sum);
}
