//
//  creatCircle.c
//  Joseph_Circle
//
//  Created by Shawn on 2017/11/27.
//  Copyright © 2017年 Shawn. All rights reserved.
//

#include "head.h"
extern void createCirList(CirList *L, int n){
    CirList newPtr;
    CirList phead;
    *L = (CirList)malloc(sizeof(CirList));
    (*L)->next = *L;
    phead = *L;
    int i;
    
    for ( i = 0 ; i<n ; i++ ){
        if ( i == 0){
            printf("Input the %d people's code.\n",i+1);
            scanf("%d",&(*L)->data);
            (*L)->number = i+1;
        }
        else{
            newPtr = (CirList)malloc(sizeof(CirList));
            printf("Input the %d people's code.\n",i+1);
            scanf("%d",&newPtr->data);
            newPtr->number = i+1;
            while( phead->next != *L){
                phead = phead->next;   // 遍历，找到次新加入的节点
            }
            newPtr->next = phead->next; // 插入新的节点
            phead->next = newPtr; // 将新的节点链接
        }
    }
}
