#include <stdio.h>
int main(){
	int n;
	printf("Enter a number for a tabLe :");
	scanf("%d",&n);
for(int i=1;i<11;i++){
	int res=i*n;
	printf("%d * %d = %d\n",n,i,res);
}	
}
