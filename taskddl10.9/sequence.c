#include <string.h>
// 数组索引
int sequence(int number[], int n)
{
	int i, temp;
	for (i = 0; i < n/2 ; i++)
	{
		temp = number[i];
		number[i] = number[n-i-1];
		number[n-i-1] = temp;
		
	}	
}
main()
{
	int i;
	int a[]= {1, 2, 3, 4, 5};
	sequence(a,5);
	for (i = 0; i < 5; i++){
		printf("%d",a[i]);
	}
		
	printf("\n");
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