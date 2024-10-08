#include <stdio.h>
int main(){
	int con=0,vow=0;
	char arr[5];
	
	for(int i=0;i<5;i++){
	printf(" Enter a character for %d index : ",i);
	scanf(" %c",&arr[i]);	
	}
	for(int j=0;j<5;j++){
   switch(arr[j]){
   	case 'a':
   		vow+=1;
   		break;
    case 'e':
    vow+=1;
   		break;
	case 'i':
   		vow+=1;
   		break;
    case 'o':
    vow+=1;
   		break;
		case 'u':
    vow+=1;
   		break;  
		   default:
		   con+=1;
		   break; 	   	
   }
 	}
 	printf("there are %d vowels and %d consonants",vow,con);
	
	
}