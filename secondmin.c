#include <stdio.h>
int main(){
	int arr[5];
	int copy[5];
	int max;
	
	int index=0;
	for(int i=0;i<5;i++){
		printf("Enter %d :",i);
		scanf("%d",&arr[i]);
		
	}
		int min=arr[0];
	for(int i=0;i<5;i++){
		if(arr[i]<min){
				min=arr[i];
				index = i;
			
		}else if(arr[i]>max){
			max=arr[i];
		}	
		
	}
	arr[index]=max;
	int secmin=arr[0];
//	for(int i=0;i<5;i++){
//		printf("%d",arr[i]);
//	}
	for(int i=0;i<5;i++){
		if(arr[i]<secmin){
			if(arr[i]<secmin){
			secmin=arr[i];
			}
		}	
		
	}
	printf("minimum is %d\n",min);
	printf("second minimum %d\n",secmin);
	
	
}