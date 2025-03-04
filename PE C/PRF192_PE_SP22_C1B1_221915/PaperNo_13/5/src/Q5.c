#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n;
  scanf("%d",&n);
  int a[n];
  int i;
  int sum = 0;
 for(i=0; i<n; i++){
 
  	scanf("%d",&a[i]);
  }
  int check = 1;
  
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for(i=0;i<n;i++)
  {
  	if(a[i] % 2 == 1){
  		sum += a[i];
  		check = 0;
  		
	  }
  }
  if(check == 0) {
  	printf("%d",sum);
  }else {
  	printf("odd numbers do not exist");
}

  







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
