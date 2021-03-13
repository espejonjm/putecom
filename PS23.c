#include <stdio.h>

int main()
{
	int isec, sec2, min, hr, seconds;
	printf("Welcome to Time Converter!\n");
	
	//prompting user to enter data
	printf("Enter number of seconds: ");
	scanf("%d", &isec);
	
	//computations
	hr=isec/3600;		// 1 hour=3600 seconds
	sec2=isec-3600*hr;
	min=sec2/60;			// 1 min= 60 seconds
	seconds=sec2-60*min;
	
	
	printf("%d seconds is equal to %d hours, %d minutes, and %d seconds\n", isec, hr, min, seconds);
	
	
	
	
	return 0;
	
	
}
