#include <stdio.h>

int main(){
	
	char ch;
	
	printf("Enter a character: ");
	scanf(" %c",&ch);
	
	  if(ch<=90 && ch>=65)
	  	printf("IT IS AN UPPERCASE");
	
	  else if(ch>=97 && ch<=122)
	  	printf("IT IS A LOWERCASE");
	
		else
			printf("IT IS NOT A LETTER");
			
	
	return 0;
}
