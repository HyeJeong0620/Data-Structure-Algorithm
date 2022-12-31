#include <stdio.h>
char star[20];
void f(int n) {
	if(n==0) return;
	f(n-1);
	star[n]='*';
	printf("%s", star+1);
	printf("\n");
} 

int main() {
	int n;
	scanf("%d", &n);
	f(n);
}
