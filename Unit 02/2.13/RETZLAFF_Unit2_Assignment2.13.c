#include <stdio.h>

main(){
	
	int age;
	printf("What is your age? ");
	scanf("%d", &age);	
	
	int counter;
	int birthyear;
	birthyear = 2020-age;
	int year;
	for(counter=0;counter<=age;counter++){
		year = birthyear + counter;
		printf("%d: Happy Birthday!!!\n", year);
	}
	
	return;
}
