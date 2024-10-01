#include <stdio.h>
int main(){
	int n;
	 long int res=1;
	printf("Enter number of peoples : ");
	scanf("%d",&n);
	for(n;n>0;n--){
		res=res*n;
	}
	printf("total ways to arrange these participants for one workshop is %d",res);
}