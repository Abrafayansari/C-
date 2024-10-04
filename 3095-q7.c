#include <stdio.h>
int main(){
	int n;
	int l=0,k=0,j=0,i=0;
	printf("Enter amount : ");
	scanf("%d",&n);
	while(n>0){
	     if(n>25){
		n=n-25;	
		i++;}
	
	    if(n<25&&n>10){
		n=n-10;		
		j++;}
	
		if(n<10&&n>5){
		n=n-5;		
		k++;}
	
    	if(n<5&&n>=1){
		n=n-1;	
		l++;
	}
	}
	printf("we need %d coins of 25, %d coins of 10 , %d coins of 5 , %d coins of 1",i,j,k,l);
	
	
}

