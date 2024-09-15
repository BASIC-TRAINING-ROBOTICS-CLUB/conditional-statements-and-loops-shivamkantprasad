//
// Created by shiva on 13-09-2024.
//
#include "stdio.h"

int main(){
    int arr[] = {1,65,84,95,15,358,62};
    int even = 0;
    int odd = 0;

    //finding the number of even and odd elements
    for(int x; x<6; x++){
        if(arr[x] % 2 ==0){
            even+=1;
        }else{
            odd+=1;
        }
    }
    printf("there are %d even elements and %d odd elements\n", even, odd);

    //creating arr for odd and even elements
    int arr_even[even], arr_odd[odd];
    even = 0; odd =0;//reusing these elements for index of the array


    for(int x; x<6; x++){
        if(arr[x] % 2 == 0){
            arr_even[even] = arr[x];
            even++;
        }else{
            arr_odd[odd] = arr[x];
            odd++;
        }
    }

    //printing the sorted arrays
    printf("the elements that are even are ");
    for (int y = 0; y < even; y++) {
        printf("%d ", arr_even[y]);
    }

    printf("\nthe elements that are odd are ");
    for (int y = 0; y < odd; y++) {
        printf("%d ", arr_odd[y]);
    }

    return 0;
}