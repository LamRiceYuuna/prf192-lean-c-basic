//Nguyen Bao Lam - SE1711
#include<stdio.h>
#include<math.h>
int check_prime(int n) { //Ham check so nguyen to
    if (n < 2) {
        return 0;
    }
    int loop = (int) sqrt(n);
    int i;
    for (i = 2; i <= loop; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main()
{
	int i,j,k,o;
	int count2 = 0;
	printf("Table of Primes\n");
	printf("===============\n");
	printf("Lower limit:  ");
	scanf(" %d", &j);
	printf("Upper limit:  ");
	scanf(" %d",&k);
	printf("# of columns: ");
	scanf(" %d", &o);
	printf("\n");
	for(i=j;i<=k;i++){
		if(check_prime(i) == 1){
			printf("%7d",i);/* 7 o day chi moi so in ra cach nhau 10 khoang trang ke ca 
			                          vi tri cua no*/
			count2 += 1;
		}
		if( o == count2){   // so cot = so nguyen to ta xuong dong va reset count2 ve 0 de lap lai de duoc bang theo yeu cau
			printf("\n");
			count2 = 0;
			}
}
}
