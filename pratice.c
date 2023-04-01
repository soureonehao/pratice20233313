#include<stdio.h>
float avarge(float arr1[10]) { //定义函数
	int i;
	float sum = 0.0;
	for (i = 0; i < 10; i++) //函数体，计算平均数
		sum = sum + arr1[i]; 
	return sum / 10;
}
void main() {
    int  i;
	float arr[10];
	for(i = 0; i < 10;i++)
		scanf_s("%f", &arr[i]); //注意这边的数据类型
	printf("%f", avarge(arr)); //函数调用
}