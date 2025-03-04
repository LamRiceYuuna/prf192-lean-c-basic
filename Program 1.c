/*Nguyen Bao Lam - SE1711*/
#include<stdio.h>
int main()  {
	double num1,num2;
	double result;
	char calculation;
    printf("Enter an expression (+ - * /): ");
	scanf("%lf%c%lf", &num1, &calculation,&num2);
	switch(calculation) {
		case'+':
		result = num1 + num2;
		printf("Result = %lf ", num1 + num2);
		break;
		case'-':
		result = num1 - num2;
		printf("Result = %lf", num1 - num2);
		break;
		case'*':
		result = num1 * num2;
		printf("Result = %lf", num1 * num2);
		break;
		case'/': 
		if(num2 == 0){
			printf("Does not exist");
		}
		else {
			result = num1 / num2;
			printf("Result = %lf", num1 / num2);
			}
			break;
		default:
			printf("Calculation is not available");
		}
	return 0;
	}
			
	
	

