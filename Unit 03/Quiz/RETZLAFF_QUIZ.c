#include <stdio.h>

main(){
	
	float Housing, Transport, Food, Util, Insurance, Misc;
	
	printf("Welcome to your monthly finance app!\n\n");
	
	printf("Please enter your monthly HOUSING EXPENSES ");
	scanf("%f", &Housing);
	
	printf("Please enter your monthly TRANSPORTATION EXPENSES ");
	scanf("%f", &Transport);
	
	printf("Please enter your monthly FOOD EXPENSES ");
	scanf("%f", &Food);
	
	printf("Please enter your monthly UTILITIES EXPENSES ");
	scanf("%f", &Util);
	
	printf("Please enter your monthly INSURANCE EXPENSES ");
	scanf("%f", &Insurance);
	
	printf("Please enter your monthly MISCELLANEOUS EXPENSES ");
	scanf("%f", &Misc);
	
	float Total;
	Total = (Housing + Transport + Food + Util + Insurance + Misc);
	printf("Your total expenses are %.2f\n", Total);
	
	float Yearly;
	Yearly = (Total * 12);
	printf("Your total YEARLY expenses are %.2f\n", Yearly);
	
	float FinI;
	FinI = (Yearly * 25);
	printf("Your FINANCIAL INDEPENDENCE VALUE is %.2f\n", FinI);
	
	
	
	
	
	return;
	
}
