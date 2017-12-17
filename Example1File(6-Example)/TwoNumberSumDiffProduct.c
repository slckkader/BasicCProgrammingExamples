#include <stdio.h>/*Needed Library*/

int main() { /*Main Method.*/

	int sum, difference, product, num1, num2;/*Declarations..*/

	printf("Enter Two Numbers(Integer) : ");/*Output to console.*/
	scanf(" %d %d", &num1, &num2);/*Input Reading.*/

	sum = num1 + num2;/*Sum of the num1 and num2.*/
	difference = num1 - num2;/*Substition of the num1 and num2.*/
	product = num1 * num2;/*Product of num1 and num2.*/

	printf("The Sum Of Numbers: %d", sum);/*Write to console sum.*/
	printf("\nThe Difference Of Numbers: %d", difference);/*Write to console difference.*/
	printf("\nThe Product Of Numbers: %d", product);/*Write to console product.*/

	return 0;
}
