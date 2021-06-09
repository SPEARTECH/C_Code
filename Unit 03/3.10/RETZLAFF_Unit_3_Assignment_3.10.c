#include <stdio.h>

main(){
	
	int value, s, c;
	
	printf("Enter a number and the program will calculate the square and the cube.\n\n");
	scanf("%d", &value);
	
	s = sq(value);
	c = cube(value);
	
	printf("The square is %d\n", s);	
	printf("The cube  is %d", c);
	
	return;
}

int sq(int value){
	
	int square;
	square = value * value;
	
	return square;
}

int cube(int value){
	
	int cube;
	cube = value * value * value;
	
	return cube;
	
}
