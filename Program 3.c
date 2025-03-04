//Nguyen Bao Lam - SE1711
#include<stdio.h>
int main(){
	int n;
    int sum = 0;
    do 
    {
    printf("Enter n: ");
    scanf("%d", &n);
    sum = sum + n;
    }while(n != 0);
    printf("Sum of integers = %d", sum);
    return 0;
    }


