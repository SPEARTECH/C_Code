#include <stdio.h>

main(){
	int number;
	
	printf("What is your number? ");
	scanf(" %d", &number);
	
	if (number > 0){
		printf("More than 0\n");
	} else {
		printf("Less than or equal to 0\n");
	}
	
	printf("\n\nEnd of program");
	
	return;
}
