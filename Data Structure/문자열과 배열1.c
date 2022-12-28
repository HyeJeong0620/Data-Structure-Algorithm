#include <stdio.h>
#include <string.h>
int main(){
 char alpha[6] = { 'H', 'E', 'L', 'L', 'O', '!'} ;
  char c;
  int i;
 scanf("%c", &c);
 for(i=0;alpha[i]!='\0';i++){
	 if(alpha[i] == c){
		 printf("%d번째\n", i+1);
		 break;
	 }
 }
	return 0;
}
	
