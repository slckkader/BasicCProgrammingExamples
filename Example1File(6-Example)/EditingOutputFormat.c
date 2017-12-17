#include <stdio.h>

int main() {

	double number;

	printf("Enter a number (2 digits integer and 5 digits fractional) :");
	scanf("%lf", &number);
	printf("%.5lf", number);
	printf("\n%-8.2lf", number);
	printf("\n%-2.lf", number);
	printf("\n%-10.7lf", number);
	printf("\n%-15.3fl", number);
	printf("\n%-12.8lf", number);
	printf("\n%-7.2lf", number);
	printf("\n%-6.lf", number);
	printf("\n%-9.1lf", number);
	printf("\n%-12.7lf", number);

	return 0;

}
