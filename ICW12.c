//Nguyen Bao lam -SE1711
#include<stdio.h>
void binh_phuong(int*n)
{
	*n=(*n)*(*n);
	}
int main()
{
    int a;
    printf("Nhap so a di bru:");
    scanf("%d",&a);
    binh_phuong(&a);
    printf(" Result of a^2 is :%d ", a);
    return 0;
    }
	
