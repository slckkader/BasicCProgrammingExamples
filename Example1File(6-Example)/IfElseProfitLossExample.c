#include <stdio.h>

int main(){
	
	int cost,selling,output;
	
	
	printf("Enter the value (amount) of the cost price: ");
	scanf("%d",&cost);
	printf("Enter the value (amount) of the selling price: ");
	scanf("%d",&selling);
	
	output=fabs(cost-selling);
	
	
	if(cost-selling>0)
		printf("The status is : Loss");
	else if(cost-selling<0)
		printf("The status is : Profit");
	else
		printf("No Loss,No Profit");
		
	printf("\nOutput amount:%d ",output);
	
	
	return 0;
}
