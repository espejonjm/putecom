#include <stdio.h>


int main()
{ 
	int due;
	double loan, inter,totalPay, rate;
	
	printf("Welcome to Loan Calculator App!\n");
	
	//prompting user to enter data
	printf("Enter amount loaned: ");
	scanf("%lf", &loan);
	printf("Enter interest rate(%%): ");
	scanf("%lf", &inter);
	printf("Loan term (months): ");
	scanf("%d", &due);
	
	//interest rate to be used in formula
	rate= (inter/100);
	//formula to compute amount to be paid
	totalPay=loan+(rate*loan*due);
	
	printf("Your loan of %.2f with an interest rate of %.0f%% for %d months should be paid a total of %.2f", loan, inter, due, totalPay);
	
	
	
	
	
	
	
	
	return 0;

}


