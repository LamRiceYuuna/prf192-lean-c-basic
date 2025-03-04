//Nguyen Bao Lam - SE1711
#include<stdio.h>
#include<math.h>
int check_prime(int n) {
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
int check_palindrome(int n) {
	int r=0, t;
	t=n;
	while(t != 0)
	{
		r = r * 10;
		r = r + t%10;
		t = t / 10;
		}
		if(n==r){
			return 1;
			}
	return 0;
	}
			
int main()
{
	float n;
	printf("Nhap mot so ngau nhien: ");
	scanf("%f",&n);
	if(n == (int)n){
		printf("\n%g la so nguyen ", n);
	}else{
		printf("n%g khong phai la so nguyen", n);
	if(check_prime(n) == 1 ) {
            printf("%d la so nguyen to ", n);
            }
    if(check_palindrome(n) == 1){
    	    printf("%d la so doi xung ", n);
    	    }
}
}
// Em van chua chay duoc a
