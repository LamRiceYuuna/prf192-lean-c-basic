#include <stdio.h>
#include <string.h>
int luaChonCuaUser()
{
	int luaChon;
	printf("\n");
	printf("\nMoi ban chon 1 trong cac options duoi day: ");
	printf("\n1. Nhap vao 1 chuoi");
	printf("\n2. Tach chuoi ra cac tu");
	printf("\n3. Viet hoa chu cai dau");
	printf("\n4. Bo khoang trang thua");
	printf("\n7. In ra chuoi dang luu");
	printf("\nLua chon cua ban la (0->7): ");
	scanf("%d%*c",&luaChon);
	return luaChon;
}

int nhapDuLieu(char *chuoiP)
{
	char temp[1000];
	int doDai;
	printf("\nMoi ban nhap chuoi ki tu: ");
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
	printf("\nChuoi dang duoc luu la: \n");
	for (i=0;i<doDai;i++)
	{
		printf("%c",*(chuoiP+i));	
	}	
}

void tachTu(int doDai, char *chuoiP)
{
/*	int i=0;
	while (i < doDai)
	{
		if (*(chuoiP+i) == ' ')
		{
			printf("\n");
			i++;
		}
		else 
		{
			printf("%c",*(chuoiP+i));
			i++;
		}
		
	}*/
	char mangTu[100][50] ={};
	int i;
	int demDong = 0, demChu = 0;
	for (i=0;i<doDai;i++)
	{
		if (*(chuoiP+i) == ' ') //&& *(chuoiP+i))
		{
			//mangTu[demDong][demChu] = '\0';
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
		printf("\nTu thu %d la: %s",i+1,mangTu[i]);
	}
}

void vietHoa(int doDai, char *chuoiP)
{
	int test = 0,i;
	for (i=0;i<doDai;i++)
	{
	/*	if (test == 0)
		{
			*(chuoiP+i) = toupper(*(chuoiP+i));
			test++;
		} */
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
	printf("Sau khi bo khoang trang: %s",mangMoi);
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
				//vietHoaCachChu(doDai,chuoiP);
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

