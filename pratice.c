#include<stdio.h>
float avarge(float arr1[10]) { //���庯��
	int i;
	float sum = 0.0;
	for (i = 0; i < 10; i++) //�����壬����ƽ����
		sum = sum + arr1[i]; 
	return sum / 10;
}
void main() {
    int  i;
	float arr[10];
	for(i = 0; i < 10;i++)
		scanf_s("%f", &arr[i]); //ע����ߵ���������
	printf("%f", avarge(arr)); //��������
}