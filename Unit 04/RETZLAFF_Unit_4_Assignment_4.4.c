//S. Tyler Retzlaff  July 21, 2020

#include <stdio.h>
void main(void);
void printScores(float scores[]);

void main(void){
	
	char s_name[] = "ECPI University";
	float scores[6] = {100.0, 100.0, 76.7, 98.4, 96.5, 88.8};
	float average = 0.0;
	int counter;
	
	printScores(scores);
	
	for (counter = 0; counter < 6; counter++){
		average += scores[counter];
	}	
	
	average /= (float)6;
	
	printf("At %s, your class average is %.1f.", s_name, average);
	
	return;
}

void printScores(float scores[6]){
	int counter;
	
	printf("Here are your scores:\n");
	for (counter = 0; counter < 6; counter++){
		printf("%.1f\n", scores[counter]);
	return;
	}
}
