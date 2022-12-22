#include<stdio.h>
void inputArray( int a[][4], int r);
void outputArray( int a[][4], int r);
int main(){
	int score[3][4];
	int row = 3;
	int i, j, tot;
	double avg;
	
	inputArray(score, 3);
	for(i=0;i<3;i++){
		tot = 0;
		for(j=0;j<4;j++){
			tot = tot + score[i][j];
		}
		avg = tot / 4.0;
		printf("총점 : %d, 평균 : %.2f\n", tot, avg);
	}
	return 0;
}
void inputArray( int a[][4], int r){
	int i, j;
	for(i=0;i<r;i++){
		for(j=0;j<4;j++){
			scanf("%d", &a[i][j]);
		}
	}
}
void outputArray( int a[][4], int r){
	int i, j;
	for(i=0;i<r;i++){
		for(j=0;j<4;j++){
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
}