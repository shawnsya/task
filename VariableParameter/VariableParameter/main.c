//
//  main.c
//  VariableParameter
//
//  Created by Shawn on 2017/11/11.
//  Copyright © 2017年 Shawn. All rights reserved.
//

#include <stdio.h>
#include <stdarg.h>


int main(int argc, const char * argv[]) {
    int sum(int start, ...);
    printf("sum(1,2,-1024) = %d\n", sum(1,2,-1024));
    printf("sum(1,2,3,4,-1024) = %d\n", sum(1,2,3,4,-1024));
    
    return 0;
}
int sum(int start, ...){
    int i, temp ;
    int result = 0;
    va_list valist;
    // list
    va_start(valist, start);
    result = start;
    for (i = 0; (temp = va_arg(valist, int)) != -1024; i++) {
        result += temp;
    }
    va_end(valist);
    return result;
}
