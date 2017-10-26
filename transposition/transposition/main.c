//
//  main.c
//  transposition
//
//  Created by Shawn on 2017/10/18.
//  Copyright © 2017年 Shawn. All rights reserved.
//
//  转置二维数组


#include <stdio.h>
int temp;

int main(int argc, const char * argv[]) {
    int a[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int i, j;
    
    for (i = 0; i < 4;++i){
        for(j = 0; j < 4;++j){
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 4; ++i) {
        for (j = i; j < 4; ++j) {
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
    for (i = 0; i < 4;++i){
        for(j = 0; j < 4;++j){
            printf("%4d",a[i][j]);
        }
        printf("\n");
}
}
