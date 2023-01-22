#include <stdio.h>
#include <string.h>
int main() {
   char mystr1[256];
   char mystr2[256]; 
   scanf("%s",mystr1);
   int num1=0;
   int len = strlen(mystr1);
   int num2= len-1;
   int i;
   for(i=0;i<len;i++){
      mystr2[i]=mystr1[i];
   }
   for(i=0;i<len;i++){
      if(mystr1[i]==mystr2[num2]){
         num1++;
      }
      num2--;
   }
   if (num1==len) {   //펠린드롬 판정 함수 호출
      printf("Yes\n");
   }
   else {
      printf("No\n");
   } 
   
   return 0;
}