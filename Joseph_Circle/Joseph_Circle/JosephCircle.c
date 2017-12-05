//
//  JosephCircle.c
//  Joseph_Circle
//
//  Created by Shawn on 2017/11/27.
//  Copyright © 2017年 Shawn. All rights reserved.
//

#include "head.h"

extern void JosephCircle(CirList *L, int m){
    CirList preptr = *L;
    CirList curptr ;
    while( preptr->next->number != 1 ){
        preptr = preptr->next;
    } // 遍历
    curptr = preptr->next;
    int i = 0;
    while (curptr != preptr){
        i++;
        if (i == m ){
            printf("%d\t", curptr->number );
            m = curptr->data; // 间隔值变化
            preptr->next = curptr->next;
            curptr = curptr->next;
            i = 0;
        }
        else{
            preptr = curptr;
            curptr = curptr->next; // 遍历
        }
    }
    printf("%d\t", curptr->number );
}
