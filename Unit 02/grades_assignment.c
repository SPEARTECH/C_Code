#include <stdio.h>

main(){
	float grade1, grade2, avg;
	
	printf("Enter 1st grade: ");
	scanf("%f", &grade1);
	
	printf("Enter 2nd grade: ");
	scanf("%f", &grade2);	
	
	avg = (grade1 + grade2) / 2; //wrong...fix later
	
	printf("The average is %.2f and %.2f is %.2f", grade1, grade2, avg);
	
	if(avg < 65){
		printf("This is a failing grade! :(");
	} else {
		printf("Great job... you passed!!!");
	}
	
	return;
}
