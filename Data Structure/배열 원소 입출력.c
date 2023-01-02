#include <stdio.h>
int inputArray(int a[]);
void outputArray(int a[], int s);
int main() {
	int a[100];
	int i, j, num, size = 0;
	size = inputArray(a);
	outputArray(a, size);
	return 0;
}
int inputArray(int a[]){
	int i;
	for(i=0;i<100;i++){
		scanf("%d", &a[i]);
		if(a[i]==0)
			break;
	}
	return i-1;
}
void outputArray(int a[], int s){
	for(int j=s;j>=0;j--){
		printf("%d ", a[j]);
	}
}