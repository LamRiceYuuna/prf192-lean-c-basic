//Nguyen Bao Lam - SE1711
#include <stdio.h>
int main(void) {

  int n,m, i, j;
  printf("Enter the low end of the range : ");
  scanf("%d", &n);
  printf("Enter the high end of the range : ");
  scanf("%d", &m);
  printf("%4c",' ');// in khoang trong phân dau bang
  for (i = n ; i <= m; i++) { // in cot
    printf("%4d", i);
  }
  printf("\n");
  for(i= n; i <= m;i++){// in cac so trong bang
    printf("%4d", i);
    for(j= n;j<=m;j++){
    	printf("%4d",i*j);
    	}
    printf("\n");
  }
  return 0;
}
