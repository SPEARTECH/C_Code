#include <stdio.h>

 main(){
 	int number, product;
 	
 	printf("Enter a number: ");
 	scanf("%d", &number); //& only with scanf in C coding
 	
 	product = number * number;
 	
 	printf("The value of the number is %d\n", number); //Don't use the & for a printf
 	printf("%d multiplied by %d is %d", number, number, product);
 	return;
 }
