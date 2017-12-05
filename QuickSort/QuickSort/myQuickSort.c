//
//  myQuickSort.c
//  QuickSort
//
//  Created by Shawn on 2017/12/5.
//  Copyright © 2017年 Shawn. All rights reserved.
//

#include <stdio.h>
void myQuickSort(void * base, size_t num, size_t size, int (*comparator)(const void *, const void *)){
    int number = (int)num;
    int i, j, temp, min, max;
    if (*comparator > 0) {
        printf("Option A\n");
        for (i = 0; i < number; i++) {
            min = i;
            for (j = i + 1; j < number; j++) {
                if ( *((int *)base + min) > *((int *)base + j) ) {
                    min = j;
                }
            }
            if (min != i) {
                temp = *((int *)base + min);
                *((int *)base + min) = *((int *)base + i);
                *((int *)base + i) = temp;
            }
        }
    }


    else{
        for (i = 0; i < number; i++) {
            printf("Option B\n");
            max = i;
            for (j = i + 1; j < number; j++) {
                if ( *((int *)base + max) < *((int *)base + i) ) {
                    max = j;
                }
            }
            if (max != i) {
                temp = *((int *)base + max);
                *((int *)base + max) = *((int *)base + i);
                *((int *)base + i) = temp;
                
        
    }

        }
        
    }
}
