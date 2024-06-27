//CH - 230 - A
//a4.p4.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de


#include<stdio.h>
#include<ctype.h> 
#include<string.h>

int count_consonants(char str[]) {
	
	int i;
	int count = 0; //additional variable
	               //to count consonants
	int length = strlen(str);
	//computes length

	for (i = 0; i <= length; i++) {
		if ((str[i] >= 'A' && str[i] <= 'Z') ||
		 (str[i] >= 'a' && str[i] <= 'z')) { 
			//checks if it's a letter
			if (str[i] != 'a' && str[i] != 'i' && 
			str[i] != 'e' && str[i] != 'o'
			&& str[i] != 'u' && str[i]!='A'
			&& str[i] !='E' && str[i] != 'I' 
			&& str[i] != 'U' && str[i] != 'O') {
			
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
		printf("Number of consonants=%d\n", count_consonants(str));
		//prints the function
	}
	   return 0;

}
