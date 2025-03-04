#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
char InHoaKiTuDau(char s[])
{
	int i;
	if(s[0] != '' )
	{
		s[0] = s[0] -32;
		s[1] = s[1] -32;
		for(i=1;i<strlen(s);i++)
		{
			if(s[i] == '' && s[i+1] != '' && s[i+1] >= 'a' && s[i+1] <= 'z' )
			   {
			   	s[i+1] = s[i+1] - 32;
	            s[i+2] = s[i+2] - 32;
		 } 
	}
	else {
		for ( i = 0;i<strlen(s);i++ )
		{
			if(s[i] == '' && s[i+1] !='' && s[i+1] >= 'a' && s[i+1] <= 'z' )
			{
				s[i+1]=s[i+1]-32;
				
			}
		}
	}
}
}

	
}
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  char s[max];
  gets(s);

  
  	
  
  
  
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
    InHoaKiTuDau(s);
    printf("%s",s);






  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
