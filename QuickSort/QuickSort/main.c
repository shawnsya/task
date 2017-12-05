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

int cmp(const void * a, const void * b){
    return *(int *)a - *(int *)b;
}

int main(int argc, const char * argv[]) {
    int a[10];
    int size = 10;
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        a[i] = rand() % 100;
    }
    qsort(a, size, sizeof(a[0]), cmp);
    for (int i = 0; i < size; i++) {
        printf("%d\t", a[i]);
    }

    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
