//CH - 230 - A
//a4.p5.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de


#include<stdio.h>
#include<ctype.h> 
#include<string.h>

int count_consonants(char *ptr) {
	
	int i;
	int count = 0; //additional variable
	               //to count consonant

	for (i = 0; *(ptr+i) != '\n'; i++) {
		if ((*(ptr+i)>= 'A' && *(ptr+i) <= 'Z') ||
		 ( *(ptr+i) >= 'a' && *(ptr+i) <= 'z') ){ 
			// if it's a letter starts counting
			if (*(ptr+i) != 'a' && *(ptr+i) != 'i'
			&& *(ptr+i) != 'e' && *(ptr+i) != 'o'
			&& *(ptr+i) != 'u' && *(ptr+i)!='A' &&
			 *(ptr+i) !='E' && *(ptr+i) != 'I' 
			&& *(ptr+i) != 'U' && *(ptr+i) != 'O') {
			//by adding i each time pointer diverts the adress
			count++; //counts consonants
		}
		}
		
		
	}
	return count;
	
}

int main() { 
	char str[100];
	while (1) //while enter is dialed
	{
		fgets(str, sizeof(str), stdin); 
		if (str[0]=='\n') {
			break;
		}
		printf("Number of consonants=%d\n", count_consonants(&str[0]));
		//prints the function
	}
	   return 0;

}
