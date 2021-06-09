#include <stdio.h>

main(){
	
	int Num, negCount, posCount;
	
	printf("Please enter ONE number at a time then press ENTER to see which numbers are NEGATIVE or POSITIVE.\n\n");
	printf("Enter the number 0 when finished.\n\n");	
	negCount = 0;
	posCount = 0;
	Num = 1;
	while(Num != 0){
		
		scanf("%d", &Num);
		if (Num < 0){
			negCount++;
		} 
		if(Num > 0){
			posCount++;
		}

	
	}
	
	
	
	printf("You entered %d NEGATIVE numbers and %d POSITIVE numbers.", negCount, posCount);
	
	return;
} 
