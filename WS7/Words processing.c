//Nguyen Bao Lam - SE1711
#include <stdio.h>
#include <string.h>
int luaChonCuaUser()
{
	int luaChon;
	printf("\n");
	printf("\nChoose one of the following options: ");
	printf("\n1. Input a string");
	printf("\n2. Split a string into words");
	printf("\n3. Convert a string into proper form");
	printf("\n4. Remove redundant spaces");
	printf("\n5. Check valid name");
	printf("\n6. Check valid email");
	printf("\n7. In ra chuoi dang luu");
	printf("\n0. Exit");
	printf("\nYour selection (0->7): ");
	scanf("%d%*c",&luaChon);
	return luaChon;
}

int nhapDuLieu(char *chuoiP)
{
	char temp[1000];
	int doDai;
	printf("\nEnter a string: ");
	scanf("%[^\n]",&temp);
	doDai = strlen(temp);
	
	int i;
	for (i=0;i<doDai;i++)
	{
		*(chuoiP + i) = temp[i];
	}
	
	return doDai;
}

void inDuLieu(int doDai, char *chuoiP)
{
	int i;
	printf("\nPrintf a string: \n");
	for (i=0;i<doDai;i++)
	{
		printf("%c",*(chuoiP+i));	
	}	
}

void tachTu(int doDai, char *chuoiP)
{

	char mangTu[100][50] ={};
	int i;
	int demDong = 0, demChu = 0;
	for (i=0;i<doDai;i++)
	{
		if (*(chuoiP+i) == ' ') 
		{
			
			demDong++;
			demChu = 0;
		}
		else
		{
			mangTu[demDong][demChu] = *(chuoiP+i);
			demChu++;
		}
	}
	
	for (i=0;i<=demDong;i++)
	{
		printf("\nWord %d is: %s",i+1,mangTu[i]);
	}
}

void vietHoa(int doDai, char *chuoiP)
{
	int test = 0,i;
	for (i=0;i<doDai;i++)
	{

		if (*(chuoiP+i) == ' ')
		{
			*(chuoiP+i+1) = toupper(*(chuoiP+i+1));
		}
	}
	*(chuoiP) = toupper(*(chuoiP));
}

void vietHoaCachChu(int doDai, char *chuoiP)
{
	int test = 0,i;
	for (i=0;i<doDai;i=i+2)
	{
		*(chuoiP+i) = toupper(*(chuoiP+i));
	}
}
void boKhoangTrang(int doDai, char *chuoiP)
{
	int i,k=0;
	char mangMoi[1000];
	for (i=0;i<doDai;i++)
	{
		if (*(chuoiP+i) == ' ' && *(chuoiP+i+1) == ' ')
		{
			continue;
		}
		else
		{
			mangMoi[k] = *(chuoiP+i);
			k++;
		}
	}
	printf("Then remove redundant spaces: %s",mangMoi);
}
int main()
{
	char chuoi[1000];
	char *chuoiP;
	chuoiP = &chuoi[0];
	
	int luaChon, doDai;
	do
	{
		luaChon = luaChonCuaUser();
		switch (luaChon)
		{
			case 1:
				doDai = nhapDuLieu(chuoiP);
				break;
			case 2:
				tachTu(doDai,chuoiP);
				break;
			case 3:
				vietHoa(doDai,chuoiP);
			
				break;
			case 4:
				boKhoangTrang(doDai,chuoiP);
				break;
			case 7:
				inDuLieu(doDai,chuoiP);
				break;
			default:
				printf("\nBye!");
				break;
		}
	}
	while (luaChon > 0 && luaChon <=7);
	return 0;
}
