
#include <stdio.h>
#include <stdlib.h>


int countVowels(char * s){
	int count = 0;

	while(*s){
		((*s) >= 'A' && (*s) <= 'u' && ((*s) & 1) && 
					(  (*s) == 'e' 
					|| (*s) == 'a'
					|| (*s) == 'o'
					|| (*s) == 'i'
					|| (*s) == 'u'
					|| (*s) == 'E' 
					|| (*s) == 'A'
					|| (*s) == 'O'
					|| (*s) == 'I'
					|| (*s) == 'U') 
					&& count++);
		s++;
	}


	return(count);
}


int main(int argc, char ** argv){
	
	char * msg = "This is a message full of vowels";	

	printf("\n%i vowels found.\n", countVowels(msg));

	return(0);
}
