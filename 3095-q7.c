#include <stdio.h>
int main(){
int j;
	int arr[5];
	int arr2[5];
	
	for(int i=0;i<5;i++){
	printf(" Enter a character for %d index : ",i);
	scanf("%d",&arr[i]);	
	}

	for( j=0;j<5;j++){
  arr2[j]=arr[j];
 		printf("array 1 :%d  \n",arr[j]);

	
}
for(int k=0;k<5;k++){
		printf("\narray 2 :%d  ",arr[k]);
	
}


  
}