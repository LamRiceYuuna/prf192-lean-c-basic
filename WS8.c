#include <stdio.h>
#include <math.h>
int main()
{   
    printf("Statistics Calculator");
	printf("\n====================");
	printf("\nEnter the name of the data file : sample_1.dat");	
	FILE *fp = NULL;
	float n;
	float arr[1000] = {};
	fp = fopen("sample_1.dat","r");

	int dem = 0;
	int i = 0;
	while (feof(fp) == 0) 
	{
		fscanf(fp,"%f",&arr[i]);
		i++;
		dem++;
	}

	float sum1 = 0,mean;
	for(i = 0;i<dem;i++) 
	{
		sum1 = sum1 +arr[i];
	}
	mean = sum1 / dem;
	

	
	float sum2 = 0;
	for (i=0;i<dem;i++)
	{
		sum2 = sum2 + (arr[i]-mean)*(arr[i]-mean);
		}
		sum2 = sum2 / dem;
		

		
	printf("\n The number of data values read from this file was %d",dem);
	printf("\nTheir statistical mean is  %.2f",mean);
	printf("\nTheir standard deviation is %.2f",sqrt(sum2));
return 0;
} 
