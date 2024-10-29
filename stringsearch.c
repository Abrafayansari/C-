#include <stdio.h>
#include <stdio.h>

int main(){
	char a;
char arr[1][20];
printf("Enter a string :");
fgets(arr[0],20,stdin);
printf("Enter a character to find :");
scanf("%c",&a);
if(strchr(arr[0],a)){
	printf("found");
}else{
	printf("not found");
}

}