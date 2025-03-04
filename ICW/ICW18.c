//Nguyen Bao Lam - SE1711
#include <stdio.h>
#include <stdlib.h>
void printMenu();
void arrayFloat();




int main() {
	int choice;
    do {
    	printMenu();
    	
    	scanf("%d ", &choice);
	    switch (choice) {
		    case 1:
		    	arrayFloat();
			    break;
		    case 2:
			    break;
            case 3:
		        break;
		    case 4:
		        break;
		
	} 
 }while ( choice != 0 && choice <= 4);

 return 0;
 }
				 
void printMenu() {
	printf("\nChoose one of the following options:\n");
	printf("1. Enter the list of float numbers\n");
	printf("2. Sort the list in increasing order (Bubble sort)\n");
	printf("3. Search value x in the list\n");
	printf("4. Display the list\n");
	printf("0. Exit\n");
	printf("Your selection (0 -> 4):");
	}

void arrayFloat() {
	int n, i;
	printf("Input the  number of elements in the array: " );
    scanf("%d ", &n);
    double a[1000];
    for (i = 0; i < n; i++) {
    	scanf("%lf ", &a[i]);
    	
    }
}
    
	
