//
// Created by shiva on 13-09-2024.
//

#include <stdio.h>

int main(){
    int arr[2][2] = {{0,1},
                     {2,3}};
    for(int y = 0; y < 2; y++) {
        for (int x = 0; x < 2; x++) {
            printf("%d ", arr[y][x]);
        }
        printf("\n");
    }
    return 0;
}