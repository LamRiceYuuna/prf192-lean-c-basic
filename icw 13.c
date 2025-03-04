//Nguyen Bao Lam - SE1711  Code cua em van chua chay duoc theo y cua bai =((
#include<stdio.h>
#include<stdlib.h>
void random()
{
	int j = rand() % 2;
	
}
int main()
{   int n;
    int a[n] = { 0, 1 };	
    int i;
    scanf("%d",&n);    
    int count_xap = 0;
    int count_ngua = 0;	
	for(i = 0;i < n;i++){
		if(random() == 0) {
			count_xap += 1;
		}
		else {
			count_ngua += 1;
		}
	}
	printf("Phan tram dong xu mat xap la: %d", count_xap / n * 100);
	printf("Phan tram dong xu mat ngua la: %d", count_ngua / n * 100);
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
