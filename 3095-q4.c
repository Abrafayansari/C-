#include <stdio.h>
int main(){
	int num;
	int numb=num;
	int res=0;
	printf("Enter number : ");
	scanf("%d",&num);
	int sec=num;
	while(num>0){
	int	b=num%10;
	int Second = b*b*b;
		res=res+Second;
		num=num/10;
		
	}
	if(sec==res){
			printf("number is a armstrong number");
	}else{
			printf("not armstrong");
	}

}