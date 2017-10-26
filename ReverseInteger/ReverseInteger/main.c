//
//  main.c
//  ReverseInteger
//
//  Created by Shawn on 2017/10/23.
//  Copyright © 2017年 Shawn. All rights reserved.
//
//  get an integer from client
//  reverse and output

#include <stdio.h>
#include <ctype.h>


int main(int argc, const char * argv[]) {
    int input;
    int save[10] = {0};
    int i = 0;
    void addto(int a, int b[]);
    
    printf("Please input an integer:\n");
    scanf("%d",&input);
    
    addto(input, save);
    
    for (i = 0; save[i] != 0; i++) {
        printf("%d", save[i]);
    }
    
    return 0;
}

void addto(int a, int b[]){
    int i = 0;
    if (a / 10)
        addto(a / 10, b);
    b[i++] = (a % 10);
        
}
