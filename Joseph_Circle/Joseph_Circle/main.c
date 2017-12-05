//
//  main.c
//  Joseph_Circle
//
//  Created by Shawn on 2017/11/27.
//  Copyright © 2017年 Shawn. All rights reserved.
//


#include <stdio.h>
#include <stdlib.h>
#include "head.h"


int main(void)
{
    int m,n;
    CirList circle;
    printf("Input the number of people.\n");
    scanf("%d",&n);
    printf("Input m (when the number is first reported).\n");
    scanf("%d",&m);
    createCirList( &circle , n );
    JosephCircle( &circle , m );
    return 0;
}
