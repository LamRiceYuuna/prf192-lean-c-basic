//Nguyen Bao Lam - SE1711
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void rollDice();

void rollDice() { 
    printf("Enter number n: ");
    int n, n0 = 0, n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0; 
    scanf("%d", &n);
    int a[n], i;
    for(i = 0; i < n; i++) {
    	a[i] = 1 + rand() % 6;
    	printf("%d ", a[i]);
    	if (a[i] == 1){ 
    	    n0++;
    	}
        else if (a[i] == 2) {
    		n1++;
    	}
    	else if (a[i] == 3) {
    		n2++;
    	}
    	else if (a[i] == 4) {
    		n3++;
    	}
    	else if (a[i] == 5) {
    		n4++;
    	}
    	else {
		    n5++;
		}
    }
    printf("\nThe percent of side 1: %.2f%% \n",(float)n0/(float)n*100);
    printf("The percent of side 2: %.2f%% \n", (float)n1/(float)n*100);
    printf("The percent of side 3: %.2f%% \n", (float)n2/(float)n*100);
    printf("The percent of side 4: %.2f%% \n", (float)n3/(float)n*100);
    printf("The percent of side 5: %.2f%% \n", (float)n4/(float)n*100);
    printf("The percent of side 6: %.2f%% \n", (float)n5/(float)n*100);
}
int main() {
	char choice;
	
	do {
		rollDice();
		printf("Another run (y/n)? ");
        scanf(" %c", &choice);
    } while ( choice == 'y');
    return 0;
}
