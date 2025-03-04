#include<stdio.h>   //Nguyen Bao Lam - SE1711
#include<math.h>                 
int main()
{ 
  float P ,Pn ,t; 
  int n;
do{
	printf("\n");
	printf("2. Investment calculation\n");
	printf("Future = ");
	scanf("%f",&Pn);
    printf("Annual rate = ");
	scanf("%f",&t);
    printf("No of years = ");
	scanf("%d",&n);
	if(Pn*n*t != 0){
	P = Pn/pow(1+t,n);
	printf("Principle should be = %.2f",P);	
	if(Pn*n*t == 0){
		printf("Principle should be = %.2f ",Pn);
		}

	}
	}while(n<0 || P<0 || t<0);
}
