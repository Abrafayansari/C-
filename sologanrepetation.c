#include <stdio.h>
int main (){
	int size;
	printf("Enter sologan characters size :");
	scanf("%d",&size);
	char solo[size];
	int counter[size];
	
	int flag[size];
	for(int i=0;i<size;i++){
		counter[i]=1;
		flag[i]=1;
	}
	for(int i =0;i<size;i++){
		printf("Enter for %d index : ",i+1);
		scanf(" %c",&solo[i]);
		
	}

	for(int j=0;j<size;j++){
		for(int k=0;k<size;k++){
			if(solo[j]==solo[k]&&j!=k){
				counter[j]++;
			}
		}
	}
//	for(int i=0;i<size;i++){
//		printf("counter is : %d\n",counter[i]);
//	}
	for(int l=0;l<size;l++){
	printf("%c : %d times\n",solo[l],counter[l]);	
		
	}
	
}