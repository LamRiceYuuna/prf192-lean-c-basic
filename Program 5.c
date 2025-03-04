//Nguyen Bao Lam - SE1711
#include <stdio.h>
#include <ctype.h>
main() {
	char ch;
	int nVowels = 0, nConsonants = 0, nOthers = 0;
	do{
		scanf("%c", &ch);
		ch = toupper(ch);
		if ( ch>='A' && ch <='Z') 
		{
			switch(ch) {
				 case 'A' :
		         case 'E' :
		         case 'I' :
		         case 'O' :
		         case 'U' : 
				 	nVowels++; 
					break;
				default :
					nConsonants++;
			}
		} else nOthers++;
	} while (ch != '\n');
	printf("Number of vowels: %d\n", nVowels);
	printf("Number of consonants: %d\n", nConsonants);
	printf("Number of others: %d\n", nOthers);
}

