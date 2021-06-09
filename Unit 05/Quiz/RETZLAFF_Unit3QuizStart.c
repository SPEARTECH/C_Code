#include <stdio.h>

float ConvertCtoF(float input), ConvertFtoC(float input);
float input;
main()
{
	float originalTemp;
	int conversionType;

	
	printf("Enter 1 to convert from Celsius to Fahrenheit\n");
	printf("Enter 2 to convert from Fahrenheit to Celsius\n");
	printf("Enter your choice: ");
	scanf("%d", &conversionType);
	
	if(conversionType == 1 || conversionType == 2)
	{
		printf("\nEnter temperature to convert: ");
		scanf("%f", &originalTemp);
	}
	
	if(conversionType == 1)
	{
		printf("\n%.1f degrees Celsius converts to %.1f degrees Fahrenheit\n", originalTemp, ConvertCtoF(originalTemp));
	}
	else if (conversionType == 2)
	{
		printf("\n%.1f degrees Fahrenheit converts to %.1f degrees Celsius\n", originalTemp, ConvertFtoC(originalTemp));
	}
	else
	{
		printf("\nIncorrect input!\n");
	}
	
	return;
}

float ConvertCtoF(float input){
	
	float Ans;
	Ans = ((9 / 5) * input + 32);
	
	return Ans;
	
}

float ConvertFtoC(float input){
	
	float Ans;
	Ans = ((5 / 9) * (input - 32));
	
	return Ans;
	
}
