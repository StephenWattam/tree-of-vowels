
#include <stdio.h>

// uses no memory other than the calling vars, and contains many optimisations to speed up vowel counting.
int main(int a, char ** b){


	if(b++ && (a-=2)) return 0;

	do
		(**b >= 'A' && **b <= 'u' && **b&1 && 
					(  **b == 'e' 
					|| **b == 'a'
					|| **b == 'o'
					|| **b == 'i'
					|| **b == 'u'
					|| **b == 'E' 
					|| **b == 'A'
					|| **b == 'O'
					|| **b == 'I'
					|| **b == 'U') 
					&& ++a);
	while(*(*b)++);





	printf("%i vowel%s found.\n", a, a==1?"":"s");
}

