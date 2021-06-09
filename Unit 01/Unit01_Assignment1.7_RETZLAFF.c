#include <stdio.h>

main(){
	
	int score1, score2;
	float average, total;
	
	printf("What is the first score?");
	scanf("%d", &score1);
	
	printf("What is the second score?");
	scanf("%d", &score2);
	
	total = score1 + score2;
	average = total / 2;
	
	printf("My scores were %d and %d", score1, score2);
	printf("\nMy average grade was %f", average);
	

	return;
}
