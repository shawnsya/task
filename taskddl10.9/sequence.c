#include <string.h>
// 数组索引
int sequence(int number[]){
	int n = strlen(number);
	int i, temp;
	for (i = 0; i < n; i++, n--){
		temp = number[i];
		number[i] = number[n-i-1];
		number[n-i-1] = temp;
		
	}
	
}
// 指针版本
void swap(int number[]){
	int i, temp;
	int n = strlen(number);
	int *ax, *ay;
	for (i = 0; i < n;i++, n--){
		ax = &number[i];
		ay = &number[n-i-1];
		temp = *ax;
		*ax = *ay;
		*ay = temp;
	}
}