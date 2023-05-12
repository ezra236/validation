#include<stdio.h>
#include<math.h>
int main()
{
	int loan;
	int amount_paid;
	int amountToBePaid;
	int time;
	int month;
	int period_paying;
	float installments;
	printf("the money taken= ");
	scanf("%d",&loan);
	printf("the money paid= ");
	scanf("%d",&amount_paid);
	printf("agreed months= ");
	scanf("%d",&time);
	printf("time in months remaining= ");
	scanf("%d",&month);
	
	if(amount_paid==loan)
	{
		printf("loan cleared");
    }
    else
	
	for(month=month;month<time;month)
	{
		amountToBePaid=loan-amount_paid;
		installments=(amountToBePaid)/month;
		printf("- %d - %2f \n",amountToBePaid,installments);
	}
    
return 0;
}


