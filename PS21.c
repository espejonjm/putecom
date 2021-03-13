#include <stdio.h>


int main()
{
	int dig1, dig2;
	float sum, diff, prod, quot, mod;
	
	printf("Welcome to Calculator App!\n");
	//prompting user to input the numbers
	printf("Enter 1st number: ");
	scanf("%d", &dig1);
	printf("Enter 2nd number: ");
	scanf("%d", &dig2);
	
	//equation for addition
	sum=dig1+dig2;
	//equation for subtraction
	diff=dig1-dig2;
	//equation for multiplication
	prod=dig1*dig2;
	//equation for division
	quot=((float)dig1/dig2);
	//equation for remainder
	mod=abs(dig1%dig2);
	
	printf("Sum : %.2f\n", sum);
	printf("Difference : %.2f\n", diff);
	printf("Product : %.2f\n", prod);
	printf("Quotient : %.2f\n", quot);
	printf("Module : %.2f\n", mod);
	
	
	
	return 0;
}
