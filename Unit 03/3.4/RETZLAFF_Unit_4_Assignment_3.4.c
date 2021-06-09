#include <stdio.h>

int printInfo(char initial);
int printOther(int age, float salary);

int main(){
	char initial;
	int age;
	float salary;
	
	printf("What is your intial? ");
	scanf("%c", &initial);
	printf("What is your age? ");
	scanf("%d", &age);
	printf("What is your salary? ");
	scanf("%f", &salary);
	
	printInfo(initial);
	printOther(age, salary);
	
	return 0;
}

int printInfo(char initial){
	printf("Your initial is really %c? \n", initial);
	return 0;
}

int printOther(int age, float salary){
	printf("You look young for %d \n", age);
	printf("And $%.2f is a LOT of money!", salary);
	return 0;
}
