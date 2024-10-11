#include <stdio.h>
int main(){
	int n;
	int i;
	int j;
	printf("Enter no of letters : ");
	scanf("%d",&n);
	char pal[n];
	int copy = n-1;
	for( i=0;i<n;i++){
		printf("Enter letter for index %d :",i);
		scanf(" %c",&pal);
	}
	for( j =0;j<n;j++){
		if(pal[j]==pal[copy]){
			copy--;
		printf("yes");
		}else{
			copy--;
	printf("no");
		}
	}
}

