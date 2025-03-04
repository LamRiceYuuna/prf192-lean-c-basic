//Nguyen Bao Lam - SE1711
#include <stdio.h>
#include <string.h>

struct Book{
	char ISBN[100];
	float price;
	int quantity;
	float value;
};

int getchoice(){
	int choice;
	printf("\nMenu");
	printf("\n1. Input book titles");
	printf("\n2. List books in stock\n");
	scanf("%d", &choice);
	return choice;
}
void input(struct Book *listp, int *sizep, float *totalp){
	printf("How many types of books are there?: ");
	scanf("%d", sizep);
	printf("\nBooks in Stock Organizer");
	printf("\n=========================\n");
	int i;
	for(i = 0; i < *sizep; i++){
		printf("ISBN		: ");
		scanf("%s", &(listp + i) -> ISBN);
		printf("Price		: ");
		scanf("%f", &(listp + i) -> price);
		printf("Quantity	: ");
		scanf("%d", &(listp + i) -> quantity);
		(listp + i) -> value = (listp+i)->price * (listp+i)->quantity;
		*totalp += (listp + i) -> value;
	}
}


void swap(struct Book *listp, int *sizep){
	struct Book tmp;
	int  i, j;
	for(i = 0; i < *sizep; i++){
		for(j = 0; j < *sizep; j++){
			if(strcmp((listp + j)->ISBN , (listp + i) -> ISBN) > 0) {
				 tmp = *(listp + i);
				 *(listp + i) = *(listp + j);
				 *(listp + j) = tmp; 
			}
		}
	}
}
 
 
void inra(struct Book *listp, int *sizep){
	printf("\t\tBooks in stock\n");
	printf("\t\t==============");
	printf("\nISBN\tPrice\tQuantity\tValue\n");
	printf("-------------------------------------\n");
    int i;
	for( i = 0; i < *sizep; i++){
		printf("%s\t", (listp + i)-> ISBN );
		printf("%.2f\t", (listp  + i)-> price);
		printf("%d\t\t", (listp + i)-> quantity);
		printf("%.2f\n",  (listp+i)->price * (listp+i)->quantity);
	}
}

int main(){
	struct Book *listp, list[1000];
	listp = &list[0];
	int size;
	int *sizep;
	sizep = &size;
	float totalvalue = 0;
	float *tong = &totalvalue;
	int userchoice;
	do{
		userchoice = getchoice();
		switch(userchoice){
			case 1:
				input(listp, sizep, tong);
				break;
			case 2:
				
				swap(listp, sizep);
				inra(listp, sizep);
				printf("\t\t\t\t--------\n");
				printf("Total value books in stock \t%.2f", totalvalue);
				break;
			default:
				break;
		}
		
	} while(userchoice > 0 && userchoice <= 2);
	fflush(stdin);
	
	return 1;
}
