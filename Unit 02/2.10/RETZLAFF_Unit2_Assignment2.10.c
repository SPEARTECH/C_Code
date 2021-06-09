#include <stdio.h>

main(){
	
	
	
	float grade, avg;
	float total = 0.0;
	int number;
	int loopVariable;
	
	printf("\n*** Grade Calculation ***\n\n");
	printf("How many students are there? ");
	scanf(" %d", &number);
	
	for (loopVariable=1; loopVariable<=number;loopVariable++){
		
		printf("\nWhat is the next student's grade? ");
		scanf(" %f", &grade);
		total += grade;
		
	}
	
	avg = total / number;
	printf("\n\nThe average of this class is: %.1f", avg);
	
	
	return;
}
