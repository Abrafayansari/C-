#include <stdio.h>
int main(){

	int arr[8];
	int inv[8];
	for(int i=0;i<9;i++){
	printf(" Enter a number for %d index : ",i);
	scanf("%d",&arr[i]);	
	}
	for(int j=8;j>=0;j--){

	printf("%d",arr[j]);
	}
	
	
}