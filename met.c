#include<stdio.h>
int main()
{
	int a, b, c ,min ,max;
	printf("Nhap  so a: ");
	scanf("%d", &a);
	printf("Nhap  so b: ");
	scanf("%d", &b);
	printf("Nhap  so c: ");
	scanf("%d", &c);
	max = min= a;
	if(b > max){
		max = b;
		}
	if(c > max){
	    max = c;
	} 
	printf("The biggest number is : %d\n", max);
    if(b < min){
		min = b;
		}
	if(c < min){
	    min = c;
	} 
	printf("The smallest number is : %d", min);
    return 0;
}
	