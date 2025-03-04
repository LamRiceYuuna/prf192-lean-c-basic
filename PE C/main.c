#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	//DYNAMIC ARRAY
	//float* arr = malloc(7 * 4);
	//float* arr = malloc(28);
	//float* arr = malloc(7 * sizeof(float));//mang 7 phan tu ,4 byte float moi ptu
	//                                     //mang gom 7 bien float
    float* arr = calloc(7, sizeof(float));
	//bien ct    new Object()
  	//     ref   new Object()
	arr[0] = 39;
	arr[1] = 79;
	arr[2] = 6868;
	arr[3] = 2204;
	
	printf("The vol array has: \n");
	
	for(int i = 0; i < 7; i++)// C ko ch?n for l? s? bi?n
	
	    printf("%.1f ",arr[i]);
	
	
	float vol1 = 0, vol2 = 80, vol3, vol4, vol5, vol6, vol7, vol8;
	// khai báo l? t?ng bi?n 1 khác tên, c?m trùng tên
	printf("\nL?: %.1f %.1f %.1f...\n", vol1, vol2, vol3); 
	//khai báo nhi?u bi?n thua
	float vol[365];// có 365 bi?n r?i dó
	//m?ng array , khai báo s? ,các bi?n cùng ki?u , cùng lúc, cùng tên , sát nhau trong ram 
	//                       vol[0]  vol[1]   vol[2]
	//in m?ng
	//side effect
	vol[0] = 50;
	vol[1] = 39;
	vol[2] = 79;
	
	printf("The vol array has: \n");
	
	for(int i = 0; i < 500; i++)// C ko ch?n for l? s? bi?n
	
	    printf("%.1f ",vol[i]);
	
	//float v[] = {0, 0 , 5, 10, 15, 20, 25};//[7] ph?n t? có value luôn
	//         v[0],[1],[2],[3]
	
	float v[365] = {0, 0 , 5, 10, 15, 20, 25};//[365] ph?n t? có value luôn
	                                          //7 th?ng d?u có value , ph?n còn l?i 0
	                                          //không ph?i rác
	                                          
    	printf("\n\nThe v array has: \n");
	
	for(int i = 0; i < 365; i++)// C ko ch?n for l s? bi?n
	
	    printf("%.1f ",v[i]);
	
	
	
	
		
	
	
	
	
	
	return 0;
}