#include <stdio.h>
void bubble_sort(int a[], n){
	
	int i, j, temp;
	for (j = 0; j < n - 1; j++){
		for (i = 0; i < n - 1 ; i++){
			if (a[i] > a[i+1]){
				temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
			}
		}
	}
	for (i = 0; i <= n - 1; i++){
		printf("%d\t",a[i]);
	}
	printf("\n");
	
	
}
/*	测试bubblesort函数	*/
main(){
	int b[10], i;
	printf("请输入十个整数");
	printf("\n");
	for (i = 0; i <= 9; i++){
		scanf("%d",&b[i]);
	}
	bubble_sort(b,10);
	
}