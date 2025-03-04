//Nguyen Bao Lam - SE1711
#include<stdio.h>
int main(){
	int x, y ;

	do{
	    printf("\nEnter x: "); 
	    scanf("%d", &x);
	    printf("Enter y: "); 
	    scanf("%d", &y);
		int t = x;
		x = y;
		y = t;
		printf("After swaping: x = %d, y = %d", x, y);
	}while( x != 0 && y != 0);
	return 0;
	}

