#include <stdio.h>

main(){
	
	int num, sq, cube;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	if (num <= 1){
		printf("You need to enter a number greater than 1.\n\n");
	} else {
		sq = num * num * num;
		cube = num * num * num * num;
		
		printf("The square of %d is %d.\n", num, sq);
		printf("The cube of %d is %d.\n", num, cube);
	}
	
	return;
}
