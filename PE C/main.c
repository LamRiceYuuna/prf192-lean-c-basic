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
	// khai b�o l? t?ng bi?n 1 kh�c t�n, c?m tr�ng t�n
	printf("\nL?: %.1f %.1f %.1f...\n", vol1, vol2, vol3); 
	//khai b�o nhi?u bi?n thua
	float vol[365];// c� 365 bi?n r?i d�
	//m?ng array , khai b�o s? ,c�c bi?n c�ng ki?u , c�ng l�c, c�ng t�n , s�t nhau trong ram 
	//                       vol[0]  vol[1]   vol[2]
	//in m?ng
	//side effect
	vol[0] = 50;
	vol[1] = 39;
	vol[2] = 79;
	
	printf("The vol array has: \n");
	
	for(int i = 0; i < 500; i++)// C ko ch?n for l? s? bi?n
	
	    printf("%.1f ",vol[i]);
	
	//float v[] = {0, 0 , 5, 10, 15, 20, 25};//[7] ph?n t? c� value lu�n
	//         v[0],[1],[2],[3]
	
	float v[365] = {0, 0 , 5, 10, 15, 20, 25};//[365] ph?n t? c� value lu�n
	                                          //7 th?ng d?u c� value , ph?n c�n l?i 0
	                                          //kh�ng ph?i r�c
	                                          
    	printf("\n\nThe v array has: \n");
	
	for(int i = 0; i < 365; i++)// C ko ch?n for l s? bi?n
	
	    printf("%.1f ",v[i]);
	
	
	
	
		
	
	
	
	
	
	return 0;
}