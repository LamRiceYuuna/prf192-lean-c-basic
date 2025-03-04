//Nguyen Bao Lam - SE1711
#include<stdio.h>
int main() {
	int income, n, it, tf, ti, pa, pd;
	printf("Your income of this year: ");
	scanf("%d", &income);
	printf("Number of dependent: ");
	scanf("%d", &n);
	pa = 9000000 , pd = 3600000;
	tf = 12 * (pa + n*pd);
	printf("Tax-free income: %d\n", tf);
	ti = income - tf;
    if(ti <= 0){
	printf("Taxable income: 0\n");
	printf("Income tax: 0" );
	}
	else if(ti > 0 && ti <= 5000000){
    printf("Taxable income: %d\n", ti);
	printf("Income tax: %d", ti / 20);//*0.05=/20
	}
	else if(5000001 <= ti && ti <= 10000000 ){
	printf("Taxable income: %d\n", ti);
	printf("Income tax: %d", ti / 10);//*0.1=/10
	}
	else if(10000001 <= ti && ti <= 18000000){
    printf("Taxable income: %d\n", ti);
	printf("Income tax: %d", ti * 20 / 3);//*0.15=*20/3
	}
	else{ 
	printf("Taxable income: %d\n", ti);
	printf("Income tax: %d", ti / 5);//*0.2=/5
	}	
    return 0;
}
