#include <stdio.h>

main(){
	
	int num;
	printf("Enter a number. ");
	scanf("%d", &num);
	
	int counter;
	int value;
	for (counter = 0;counter < num; counter++){
		value = num - counter;
		printf("%d\n", value);
	}
	
	return;
}
