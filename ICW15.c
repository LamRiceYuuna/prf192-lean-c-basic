//Nguyen Bao Lam -SE1711
#include<stdio.h>
double getDouble(double min,double max)
{ double value, keeptrying = 1, rc;
  char after;
  do{
  	printf("Enter a  number \n"
	       "in the range [%f,%f] : ",
		   min, max );
    rc = scanf("%f%c",&value,&after);
    if(rc == 0){
    	printf("**No input accepted!**\n\n");
    	clear();
    }else if(after != '\n'){
    	printf("**Trailing characters!**\n\n");
    	clear();
    }else if(value < min || value > max){
    	printf("**Out of range!**\n\n");
    	clear();
    }else 
        keeptrying = 0;
    
    }while (keeptrying = 1);
     return value;
  }
double main()
{     
    getDouble();

}


