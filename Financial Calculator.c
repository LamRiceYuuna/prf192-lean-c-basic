#include<stdio.h>   //Nguyen Bao Lam - SE1711
#include<math.h>                 
int main()
{   
	ham1();
	ham2();
	}
void ham1(float P,float Pn, float t, int n)
{   
	do{
	printf("1. Test saving account\n");
	printf("Principal = ");
	scanf("%f",&P);
    printf("Annual rate = ");
	scanf("%f",&t);
    printf("No of years = ");
	scanf("%d",&n);
	printf("Principal = %.2f\n", P);
	if(P*n*t == 0){
		printf("Amount after %d year = %.2f\n ",n,P);
		}
	else{
	Pn = pow(1+t,n)*P;
	printf("Amount after %d year = %.2f\n",n,Pn);
	}
	}while(n<0 || P<0 || t<0);
}
void ham2(float P2,float Pn2,float t2, int n2)
{   
	do{
	printf("\n");
	printf("2. Investment calculation\n");
	printf("Future = ");
	scanf("%f",&Pn2);
    printf("Annual rate = ");
	scanf("%f",&t2);
    printf("No of years = ");
	scanf("%d",&n2);
	if(Pn2*n2*t2 == 0){
		printf("Principle should be = %.2f ",Pn2);
		}
	else{
	P2 = Pn2/pow(1+t2,n2);
	printf("Principle should be = %.2f",P2);
	}
	}while(n2<0 || P2<0 || t2<0);
}


























