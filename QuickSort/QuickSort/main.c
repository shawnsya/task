//
//  main.c
//  QuickSort
//
//  Created by Shawn on 2017/12/5.
//  Copyright © 2017年 Shawn. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "myQuickSort.c"


int cmp(const void * a, const void * b){
    return *(int *)a - *(int *)b;
}
int cmpChar(const void * a, const void * b){
    return *(char *)a - *(char *)b;
}

int main(int argc, const char * argv[]) {
    // 整形数组 快速排序
    int a[10];
    int size = 10;
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        a[i] = rand() % 100;
    }
    myQuickSort(a, size, sizeof(a[0]), cmp);
    for (int i = 0; i < size; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");

    //*********************／／
    // 字符串排序
    char test[] = "asdlkfjewhgsf";
    int sizeOfChar = strlen(test);
    myQuickSort(test, sizeOfChar, sizeof(test[0]), cmpChar);
    printf("%s\n",test);
    // ********************//
    
    

    return 0;
}
