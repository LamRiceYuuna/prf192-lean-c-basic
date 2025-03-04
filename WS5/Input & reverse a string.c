//Nguyen Bao Lam - SE1711
#include <stdio.h>
#include <string.h> 
void revstr();

void revstr(char *str0)  {
    int i, len, temp;  
    len = strlen(str0);  
    for (i = 0; i < len/2; i++) {  
        temp = str0[i];  
        str0[i] = str0[len - i - 1];  
        str0[len - i - 1] = temp;  
    }  
}   

void clearInput(){
    int c;
    do c = getchar(); while (c != EOF && c != '\n');
}

int main() {
	char choice;
	char str[50];
	do {
		char str[50];
		int i = 0;
        int ch;
		printf (" Enter string ended by . :  ");
		
		while((ch = getchar())  != '\n' && ch != EOF && ch != '.'){
            str[i++] = ch;
        }

        printf (" The original string: %s \n", str);
        revstr(str);  
        printf (" The reverse string: %s \n", str);
		printf("Another run (y/n)? ");
        scanf(" %c", &choice);
		fflush(stdin);  
    }while ( choice == 'y');
    return 0;
}
