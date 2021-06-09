#include <stdio.h>

int main(){
	
	int weight, height, shoeSize;
	
	printf("What is your weight in pounds? ");
	scanf("%d", &weight);
	
	printf("What is your height in inches? ");
	scanf("%d", &height);
	
	printf("What is your shoe size? ");
	scanf("%d", &shoeSize);
	
	printf("My weight is %d pounts\n", weight);
	printf("My height is %d inches\n", height);	
	printf("My shoe size is %d\n", shoeSize);	
	
	return 0;
}
