#include <stdio.h>
int printIt(income);
main(){
	int income;
	printf("What is your annual income?\n");
	scanf("%d", &income);
	printIt(income);
}
int printIt(income){
	if (income > 90000){
		printf("Congratulations!");
	} else {
		printf("You WILL make $90,000 if you keep going.");
	}
}
