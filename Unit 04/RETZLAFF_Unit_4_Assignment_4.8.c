//S. Tyler Retzlaff July 21, 2020

#include <stdio.h>
#define RANGE 9
main(){
	
	int ranges[RANGE];
	int counter;
	int input;
	
	ranges[0] = 0;
	ranges[1] = 0;
	ranges[2] = 0;
	ranges[3] = 0;
	ranges[4] = 0;
	ranges[5] = 0;
	ranges[6] = 0;
	ranges[7] = 0;
	ranges[8] = 0;
	
	printf("Enter amount of each employee's salary.\n\n");
	
	for (counter = 0; 1 == 1 ;counter++){
		scanf("%d", &input);
		if (input < 300){
			ranges[0]++;
		} else if (input < 400){
			ranges[1]++; 
		} else if (input < 500){
			ranges[2]++;
		} else if (input < 600){
			ranges[3]++;
		} else if (input < 700){
			ranges[4]++;
		} else if (input < 800){
			ranges[5]++;
		} else if (input < 900){
			ranges[6]++;
		} else if (input < 1000){
			ranges[7]++;
		} else if (input >= 1000){
			ranges[8]++;
		}
		
		printf("Employees under \t$300: \t%d\n", ranges[0]);
		printf("Employees under \t$400: \t%d\n", ranges[1]);
		printf("Employees under \t$500: \t%d\n", ranges[2]);
		printf("Employees under \t$600: \t%d\n", ranges[3]);
		printf("Employees under \t$700: \t%d\n", ranges[4]);
		printf("Employees under \t$800: \t%d\n", ranges[5]);
		printf("Employees under \t$900: \t%d\n", ranges[6]);
		printf("Employees under \t$1000: \t%d\n", ranges[7]);
		printf("Employees over \t\t$1000: \t%d\n", ranges[8]);
		
	
	}
	
	
	
	return;
}
