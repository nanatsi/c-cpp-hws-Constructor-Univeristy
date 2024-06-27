

//CH - 230 - A
//a3.p4.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#include <stdio.h>
int position(char str[], char c)
{
int idx;
/* Loop until end of string */
for (idx = 0; str[idx] != c && str[idx] != '\0'; ++idx);  
// ';' was missing and it was matter of syntax to add it
                                       
 //because it is a loop, without the proper body of it, 
 // each time of execution function returns to the
 // value of idx which is defined as 0
return idx;
}
int main() {
char line[80];
while (1) {
printf("Enter string:\n");
fgets(line, sizeof(line), stdin);
printf("The first occurrence of ’g’ is: %d\n", position(line, 'g'));
}
}

		                                                        
		
		



