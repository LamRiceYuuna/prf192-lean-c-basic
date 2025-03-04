#include <stdio.h>
int getUserChoice()
{
	int choice;
	printf("\n");
	printf("\nChoose one of the following options: ");
	printf("\n1 - Enter the list of float numbers");
	printf("\n2 - Sort the list in increasing order <Bublle sort>");
	printf("\n3 - Search value x in the list");
	printf("\n4 - Display ");
	printf("\n0 - Exit");
	printf("\nYour selection (0 -> 4): ");
	
	scanf("%d%*c",&choice);
	return choice;
}

void nhapMang(float *arrayP,int *nP)
{
	printf("Enter the length of array: ");
	scanf("%d",nP);
	
	int i;
	for (i=0;i<*nP;i=i+1)
	{
		printf("Enter the th element %d: ",i+1);
		scanf("%f",arrayP+i);
	}
}

void inMang(float *mangCtr,int *doLonP)
{
	int i;
	for (i=0;i<*doLonP;i++)
	{
		printf("\nElement a[%d] la: %.2f",i,*(mangCtr+i));
	}
}

void sapXep(float *con_tro_mang, int *size_cua_mang)
{
	int i,j;
	float trungGian;
	for (i=0;i<*size_cua_mang;i++)
	{
		for (j=0; j < *size_cua_mang - i - 1;j++)
		{
			if ( *(con_tro_mang+j) >= *(con_tro_mang+j+1) )
			{
				trungGian = *(con_tro_mang+j);
				*(con_tro_mang+j) = *(con_tro_mang+j+1);
				*(con_tro_mang+j+1) = trungGian;
			}
		}
	}
}

void timX(float *mangP, int *nP)
{
	float X;
	int i, viTri;
	printf("\nEnter the element you want to find : ");
	scanf("%f",&X);
	
	viTri = -1000;
	for (i=0;i<*nP;i++)
	{
		if ( *(mangP+i) == X)
		{
			viTri = i;
			break;
		}
	}
	
	if (viTri == -1000) printf("\nNumber %.2f does not exist in array",X);
	else printf("Number %.2f in location %d",X,viTri+1);
}

int main()
{

	int doLon;
	int *doLonP; 
	doLonP = &doLon;
	
	float mang[100];
	float *mangP;
	mangP = &mang[0];
	
	int userChoice;
	do
	{
		userChoice = getUserChoice();
		switch(userChoice)
		{
			case 1:
				nhapMang(mangP,doLonP);
				break;
			case 2:
				sapXep(mangP,doLonP);
				break;
			case 3:
				timX(mangP,doLonP);
				break;
			case 4:
				inMang(mangP,doLonP);
				break;
			default:
				printf("Bai bai!\n");
		}
	}
	while (userChoice > 0 && userChoice <= 4);
	fflush(stdin);
	
	return 0;
}
