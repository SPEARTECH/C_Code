#include <stdio.h>

main(){
	int counter;
	
	for (counter=1; counter<=5; counter++){
		firstFunction(counter);
	}
	thirdFunction();
	return;
}

firstFunction(int counter){
	printf("This is the first function and call number %d\n", counter);
	
	secondFunction();
	return;
}

secondFunction(){
	printf("This is printed from the secondFunction, which takes no arguments.\n\n");
	return;
}

thirdFunction(){
	printf("And this is printed from the thirdFunction, whicht akes no arguments.");
	return;
}
