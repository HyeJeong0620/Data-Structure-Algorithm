#include <stdio.h>
int main(void) {
  char s[10] ;
	char c;
  int i=0, p=-1 ;
	scanf("%s", s);
	getchar();
	scanf("%c", &c);
	while(s[i]!='\0'){
		if(s[i]==c){
			p = i;
			break;
		}
		i++;
	}
  if(p!=-1) printf("%d번째\n",p+1);
  
  return 0;
}
