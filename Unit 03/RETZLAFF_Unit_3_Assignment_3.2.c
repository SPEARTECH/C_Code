#include <stdio.h>

firstFunction();
secondFunction();

main(){
	printf("Function Demo \n");
	firstFunction();
	secondFunction();
	printf("Main ending\n");
	return;
}

firstFunction(){
	printf("Printing from firstFunction\n");
	return;
}

secondFunction(){
	printf("Printing from secondFunction\n");
	return;
}
