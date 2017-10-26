//
//  main.c
//  ArratBubblesort
//
//  Created by Shawn on 2017/10/22.
//  Copyright © 2017年 Shawn. All rights reserved.
//
//  Bubblesort
#include <stdio.h>

void bubble_sort(int a[], int n){
    
    int i, j, temp;
    for (j = 0; j < n - 1; j++){
        for (i = 0; i < n - 1 ; i++){
            if (a[i] > a[i+1]){
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
    }
}
    
    


int main(int argc, const char * argv[]) {
    int a[4][4] = {{1,4,7,3},{12,5,34,9},{32,80,2,6},{13,16,9,10}};
    int save[16];
    int i, j, k;
    k = 0;
    
    for (i = 0; i < 4; ++i) {
        for (j = 0;  j < 4; ++j) {
            save[k++] = a[i][j];
        }
    }
    bubble_sort(save, 16);
    for (i = 0; i < 4; ++i) {
        for (j = 0;  j < 4; ++j) {
            a[i][j] = save[4*i+j];
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
    
    
    

    
    return 0;
}
