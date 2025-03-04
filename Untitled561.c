#include <stdio.h>
 
int main()
{
    int a = 12;
    float b = 13.5;
    char c = 'Q';
    long d = 3454;
    char* s = "nguyenvanquan7826"; // khai bao kieu chuoi
 
    printf("Vi du ve su dung lenh printf\n");
    printf("Tong cua %d va %f la %f \n", a, b, a+b);
    printf("Tich cua %d va %ld la %ld \n", a, d, a*d);
    printf("Ky tu c la: %c \n", c);
    printf("Chuoi s la: %s \n", s);
    printf("Dinh dang so mu cua b la %e \n", b);
    printf("So he 16 va he 8 cua %d la %x va %o \n", a, a, a);
    printf("Ma ASCII cua %c la %d", c, c);
 
    return 0;
}
