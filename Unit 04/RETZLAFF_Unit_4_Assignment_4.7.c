//S. Tyler Retzlaff July 21, 2020

#include <stdio.h>
#define TEMP 12
main(){
	int temp;
	int counter;
	int monthNum;
	int temperature[TEMP];
	
	printf("Please enter the AVERAGE temperature for the last 12 months.\n");
	
	for (counter = 0; counter < 12; counter++){
		monthNum = counter + 1;
		printf("Month %d: ", monthNum);
		scanf("%d", &temp);	
		temperature[counter] = temp;	
	}
	
	for (counter = 0; counter < 12; counter++){
		monthNum = counter + 1;
		printf("Month %d: %d\n", monthNum, temperature[counter]);
	}

	
	return;
}
