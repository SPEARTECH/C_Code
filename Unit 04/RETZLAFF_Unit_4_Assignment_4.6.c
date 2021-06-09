//S. Tyler Retzlaff July 21, 2020

#include <stdio.h>
#define AGES 6
main(){
	
	int Ages[AGES];
	int counter;
	
	Ages[0] = 21;
	Ages[1] = 22;
	Ages[2] = 23;
	Ages[3] = 24;
	Ages[4] = 25;
	Ages[5] = 26;
	Ages[6] = 27;
	
	for (counter = 0; counter < AGES; counter++){
		printf("%d\n", Ages[counter]);
	}
	
	
	return;
}
