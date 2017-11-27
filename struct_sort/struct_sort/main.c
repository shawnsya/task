//
//  main.c
//  struct_sort
//
//  Created by Shawn on 2017/11/11.
//  Copyright © 2017年 Shawn. All rights reserved.
//

#include <stdio.h>
typedef struct Struct{
    int id;
    double grades;
}Student;

int main(int argc, const char * argv[]) {
    int i;
    Student testgroup[5] = {{1,60}, {2, 78}, {3, 66}, {4, 90}, {5, 80}};
    void struct_sort(Student students[],int length);
    
    struct_sort(testgroup,5);
    for (i = 0; i < 5; i++) {
        printf("Student's id: %d, his grades: %.2f\n",testgroup[i].id, testgroup[i].grades);
    }

    
    
    return 0;
}
void struct_sort(Student students[],int length){
    
    int i, j;
    Student temp;
    
    for (i = 0; i < length; i++) {
        
        for (j = 0; j < length; j ++) {
            
            if (students[j].grades < students[j+1].grades) {
                temp = students[j];
                students[j] = students[j+1];
                students[j+1] = temp;
                
            }
        }
    }
    
}

