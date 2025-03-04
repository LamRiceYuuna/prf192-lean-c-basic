#include<stdio.h> //Nguyen Bao Lam - SE1711

int main() {
    int n, i;
    printf("Nhap so n: ");
    scanf("%d", &n);
    int so_giai_thua = 1;
    for (i = 1 ; i <= n; i++) 
	{
        so_giai_thua = so_giai_thua * i;
    }
    printf("Gia tri cua n giai thua = %d", so_giai_thua);
    return 0;
}
