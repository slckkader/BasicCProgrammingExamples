#include <stdio.h>/*Needed Library*/

int main(void) {

	/*Declarations variables*/
	double num1, num2, avg;
	char ch1, ch2;

	printf("Enter two double numbers:");/*Output to the console.*/
	scanf("%lf %lf", &num1, &num2);/*Reading double numbers*/

	printf("Enter two characters:");/*Output to the console.*/

	scanf(" %c %c", &ch1, &ch2);/*Reading two char.*/

	avg = (num1 + num2) / 2;/*Average of num1 and num2*/

	/* displaying the result */

	printf("Average is :  %lf ", avg);
	printf("\nTwo characters are : %c %c ", ch1, ch2);

}
