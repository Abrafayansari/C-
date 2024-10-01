#include <stdio.h>
int main(){
	int bal=50000;
	int again=1
	
	int amount;
	
	while(again==1){
		printf("Enter amount to be withdrawl :");
	scanf("%d",&amount);
	if(bal>amount){
		bal=bal-amount;
		printf("you have withdraw %d and your remaining balace is %d\n",amount,bal);
		printf("Enter 1 if you want more transactions and 0 for end program :");
			scanf("%d",&again);
	}else{
		printf("unable to withdraw your remaining balance is less than %d",amount);
		break;
	}
	
	}

}