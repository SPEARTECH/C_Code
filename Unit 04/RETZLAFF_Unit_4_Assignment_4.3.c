//S. Tyler Retzlaff  July 21, 2020

#include <stdio.h>


 main(){
	
	char s_name[] = "ECPI University";
	float scores[6] = {100.0, 100.0, 76.7, 98.4, 96.5, 88.8};
	float average = 0.0;
	int counter;
	

	
	for (counter = 0; counter < 6; counter++){
		average += scores[counter];
	}	
	
	average /= (float)6;
	
	printf("At %s, your class average is %.1f.", s_name, average);
	
	return;
}

