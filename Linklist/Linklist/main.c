//
//  main.c
//  Linklist
//
//  Created by Shawn on 2017/11/11.
//  Copyright © 2017年 Shawn. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>


typedef struct NODE{
    int input;
    struct NODE *next;
}NODE, *Linkedlist;

// 初始化
void initList(NODE **pNode){
    *pNode = NULL;
    printf("初始化\n");
}

// 创建线性表
NODE * creatList(NODE *phead){
    NODE *p1;
    NODE *p2;
    
    p1 = p2 = (NODE *)malloc(sizeof(NODE));
    if (p1 == NULL || p2 == NULL) {
        printf("分配失败！\n");
        exit(0);
    }
//    memset(p1, 0 ,sizeof(NODE));
    
    scanf("%d", &p1->input);
    p1->next = NULL;
    while (p1->input > 0) {
        if (phead == NULL) {
            phead = p1;       // 表头
        }
        else{
            p2->next = p1;   // 表尾
        }
        p2 = p1;
        p1 = (NODE *)malloc(sizeof(NODE));
        if (p1 == NULL || p2 == NULL) {
            printf("分配失败！\n");
            exit(0);
        }
//        memset(p1, 0 ,sizeof(NODE));
        scanf("%d", &p1->input);
        p1->next =NULL;
        
    }
    printf("创建成功\n");
    return  phead;
}

void printList(NODE *phead){
    if (phead == NULL) {
        printf("该链表为空\n");
    }
    else{
        while (phead != NULL) {
            printf("%d->", phead->input);
            phead = phead->next;
        }
        printf("NUll\n");
    }}

NODE * reverseList(NODE *pHead){
    NODE *pre, *cur, *next;
    pre = pHead;
    cur = pHead->next;
    next = NULL;
    
    while (cur != NULL) {
        next = cur->next;
        cur->next = pre;
        pre = cur;
        cur = next;
    }
    pHead->next =NULL;
    pHead = pre;
    return pHead;
}

int main(int argc, const char * argv[]) {
    
    NODE *testPtr = NULL;
    
    initList(&testPtr);
    testPtr = creatList(testPtr);
    printList(testPtr);
    
    testPtr = reverseList(testPtr);
    printList(testPtr);
    
    
    
//    int temp;
//    void printLinkedlist(NODE *head);
//    int input;
//    NODE *L;
//    L = (NODE *)malloc(sizeof(NODE));
//    L->next = NULL;
//
//    while (scanf("%d",&temp) != -1024) {
//        NODE *p;
//        p = (NODE *)malloc(sizeof(NODE));
//        p->input = input;
//        p->next = L->next;
//        L->next = NULL;
//    }
//
//    printLinkedlist(L);

    
    return 0;
}

