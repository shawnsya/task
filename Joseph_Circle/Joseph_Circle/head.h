//
//  head.h
//  Joseph_Circle
//
//  Created by Shawn on 2017/11/27.
//  Copyright © 2017年 Shawn. All rights reserved.
//

#ifndef head_h
#define head_h


#include <stdio.h>
#include <stdlib.h>
typedef struct CirNode {
    int data;// 密码
    int number;// 序号
    struct CirNode *next;
}CirNode, *CirList;


void createCirList(CirList *L, int n);//用于生成长度为n的循环链表
void JosephCircle(CirList *L, int m);//用于完成整个约瑟夫环的进程



#endif /* head_h */
