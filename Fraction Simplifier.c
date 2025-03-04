// Nguyen Bao Lam - SE1711
#include<stdio.h>
void input(int *num, int *den) {
    printf("1. Input fraction");
    printf("\n\n");
    int tu1;  
    int mau1;  
    printf("Enter numerator: ");
    scanf("%d", &tu1);
    if(mau1 == 0){
    	printf("Enter denominator: 0");
    }
	if(mau1 != 0) {
    	printf("Enter denominator: ");
        scanf("%d", &mau1);
        }
    *den=mau1;
    *num=tu1;
}
void display(int num, int den) {
    printf("2. Simplify fraction\n\n");
    printf("%d/%d\n", num, den);
    printf("=\n");
}

int getUCLN(int a, int b) {
    while (b > 0)
    {
        int phan_du = a % b;
        a = b;
        b = phan_du;
    }
    return a;
}

void simplify(int *num, int *den) {
    int tu2, mau2;  
    int UCLN = getUCLN(*num, *den);
    tu2 = *num / UCLN;
    mau2 = *den / UCLN;
    printf("%d/%d\n", mau2 > 0 ? tu2 : -tu2, mau2 > 0 ? mau2: -mau2);
}

int main(){
    int tu, mau;
    char choice;

    do {
        input(&tu, &mau);
        display(tu, mau);
        simplify(&tu, &mau);
        printf("Another run (y/n)? ");
        scanf("%10s", &choice);
    } while(choice == 'y');

    return 1;
}
