#include <stdio.h>
char calculateLetterGrade(int numGrade);
main(){
	int numGrade;
	char grade;
	printf("What is your numerical grade?");
	scanf(" %d", &numGrade);
	
	grade = calculateLetterGrade(numGrade);
	printf("\nYour letter grade is %c\n", grade);
}

char calculateLetterGrade (int numGrade){
	char outputGrade;
		if (numGrade>=90 && numGrade <=100){
			outputGrade = 'A';
		} else if (numGrade >=80 && numGrade <=89){
			outputGrade = 'B';
		} else if (numGrade >=70 && numGrade <=79){
			outputGrade = 'C';
		} else if (numGrade >=60 && numGrade <=69){
			outputGrade = 'D';
		} else {
			outputGrade = 'F';
		}
		
		return outputGrade;
}
