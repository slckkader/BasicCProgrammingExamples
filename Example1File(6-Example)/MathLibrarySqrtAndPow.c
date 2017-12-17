#include <stdio.h>
#include <math.h>

int main(){
	float sum;
	int x,y,z;
	
	printf("Enter x value for x:");
	scanf("%d",&x);
	printf("Enter y value for y:");
	scanf("%d",&y);
	printf("Enter z value for z:");
	scanf("%d",&z);
	
	sum=fabs(pow(((pow(x,3)/(pow(y,4/5)))+ sqrt(fabs(x+z)/sqrt(y))),3));
	
	printf("%.1f",sum);
	
	
	
	
	return 0;
}
