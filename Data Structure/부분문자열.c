#include <stdio.h>
#include <stdlib.h>
int main(){
	int a,b,i;
	char* str = (char*)malloc(sizeof(char)*101);//char str[100]의 의미
	scanf("%s",str);
	scanf("%d %d",&a,&b);
	*(str+b) ='\0';
	printf("%s", str+a-1);
	return 0;
}
