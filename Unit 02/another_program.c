#include <stdio.h>

main(){
	int age;
	
	printf("What is your age? ");
	scanf("%d", &age);
	
	if(age < 18){ //true = the user is under the age of 18
		printf("You're NOT old enough to vote, because you are only %d", age);
	} else { //false - the user is 18 or older
		printf("You're old enough to vote, because you are %d", age);
	}
	
	return;
}
