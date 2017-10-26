//
//  main.c
//  SaveIntegerToArray
//
//  Created by Shawn on 2017/10/25.
//  Copyright © 2017年 Shawn. All rights reserved.
//
//  ASCII数字（96-105）

#include <stdio.h>


int power(int num,int n)//计算num的n次幂，其中n为整数
{
    int powint=1;
    int i;
    for(i=1;i<=n;i++)
        powint*=num;
    return powint;
}
int main(int argc, const char * argv[]) {
    char input[100];
    int  number[100], temp[100], output[100];
    int  i = 0, j = 0, k = 0, temporary = 0 , savenumber = 0;
    int  pro;
    int power(int a, int b);
    
    printf("Please input any kind of character :\n(use # to end the input)\n");
    for (i = 0; input[i-1] != '#';i++){
        scanf("%c", &input[i]);
    }
    i = 0;
    while (input[i++] != '#') {
        if (input[i] <= '9' && input[i] >= '0') {
            temp[j++] = input[i];
        }
        else{
            temporary = j - 1;
            while (temporary >= 0){
                pro = power(10, temporary) * temp[j - temporary - 1];
                savenumber += pro;
                temporary-- ;
            }
            output[k++] = savenumber;
        }
    }
    if (input[i] == '#'){
        output[k] = '#';
    }
    for (k = 0; output[k-1] != '#'; k++){
        printf("%c\t", output[k]);
    }
    
    printf("End.");
    
    
    return 0;
    /*i = 0;
    while (input[i] <= '9' && input[i] >= '0') {
        printf("%c", input[i++]);
     }
    
    /*for (i = 0; input[i-1] != '#';i++){
        output[i] = input[i];
        printf("%c\t", output[i]);
    }*/
}

