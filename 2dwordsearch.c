#include <stdio.h>
//char shorter(char solo[size]){
//	
//}
int main(){
    int size;
	printf("Enter sologan characters size :");
	scanf("%d",&size);
	int flag=0;
	char solo[size];
	int counter[size];
	
	for(int i=0;i<size;i++){
		counter[i]=0;
	}
	for(int i =0;i<size;i++){
		printf("Enter for %d index : ",i+1);
		scanf(" %c",&solo[i]);
		
	}

	for(int j=0;j<size;j++){
		for(int k=0;k<size;k++){
			if(solo[j]==solo[k]&&j!=k){
				if(solo[k]==solo[k-1]){
			
					counter[k]=1;
					
				}else{
					counter[k]=0;
				}
		      		
			}
		
	}}

//	for(int i=0;i<size;i++){
//		printf("counter is : %d\n",counter[i]);
//	}

	
printf("short word is ");
	for(int l=0;l<size;l++){
if(counter[l]==0){
	printf("%c",solo[l]);
}		
	}}