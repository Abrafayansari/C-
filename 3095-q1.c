#include <stdio.h>
int main(){
	int arr[8];
	int sum=0;
	for(int i=0;i<9;i++){
	printf(" Enter a number for %d index : ",i);
	scanf("%d",&arr[i]);
		sum=sum+arr[i];
		
	}
	printf("%d",sum);
	
}