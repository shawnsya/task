//
//  myQuickSort.c
//  QuickSort
//
//  Created by Shawn on 2017/12/5.
//  Copyright © 2017年 Shawn. All rights reserved.
//

#include <stdio.h>
void exchangeVoid(void * from, void *  to, size_t size){
    char * fromPtr = from;
    char * toPtr = to;
    char temp;
    for (int i = 0;  i < size; i++) {
        temp =  *(fromPtr + i);
        *(fromPtr + i) = *(toPtr + i);
        *(toPtr + i) = temp;
    }
}

void myQuickSort(void * base, size_t num, size_t size, int (*comparator)(const void *, const void *)){
    int i, j, min;
// 选择排序
//  找出最小值 min 与 j 比较
    for (i = 0; i < num; i++) {
        min = i;
        for (j = i + 1; j < num; j++) {
            if (comparator(base + size * min, base + size * j) > 0) {
                min = j;
            }
        // 进行交换
        if (min != i) {
            exchangeVoid(base + size * min, base + size * i, size);
            }
        }
    }

}

