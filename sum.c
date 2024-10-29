#include <stdio.h>
#include <string.h>

int main(){
	int i=0;
	int j=0;
	char a[20];
	int flag=0;
	int size;
	printf("Enter a no of words you want to enter :");
	scanf("%d",&size);
char arr[size][20];
for( i=0;i<size;i++){
printf("Enter a string :");
scanf("%s",arr[i]);
} 
printf("Enter a word to find :");
scanf("%s",&a);
for( j=0;j<size;j++){
	if(strstr(arr[j],a)){
	flag++;
}
}
if(flag>=1){
	printf("found");
}else{
	printf("not found");
}

}
